//
// Created by Linus KINZEL on 7/23/17.
//

int     is_number(char c)
{
    if (c > 47 && c < 58)
        return (1);
    else
        return (0);
}

int     is_operator(char c)
{
    if (c == '%' || c == '+' || c == '-' || c == '*' || c == '/')
        return (1);
    else
        return (0);
}

int     add_to_queue(char c)
{
    g_queue[ft_strlen - 1] = c;
    g_queue[ft_strlen] = '\0';
}

int     get_precedence(char c)
{
    if (c == '*' || c == "/" || c == '%')
        return (2);
    else
        return (1);
}

char    *g_queue;

char    *shunting_yard(char *str)
{
    int     i;

    i = 0;
    g_queue = (char*)malloc(sizeof(char) * ft_strlen(str) + 1); // check if it's enough to allocate for length of normal notation string
    while (str[i] != '\0')
    {
        if (is_number(str[i]))
            add_to_queue(str[i]);
        else if (isoperator(str[i]))
        {
            while (get_precedence(opstack.stk[opstack.top]) >= get_precedence(str[i]))
                add_to_queue(pop());
            push(str[i]);
        }
        else if (str[i] == '(')
            opstack.push(str[i]);
        else if (str[i] == ')')
        {
            while (opstack.stk[opstack.top] != '(')
                add_to_queue(pop());
            pop();
        }
        i++;
    }
    while (opstack.top != -1)
        add_to_queue(pop());

    return (g_queue);
}
