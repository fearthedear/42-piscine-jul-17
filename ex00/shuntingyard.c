//
// Created by Linus KINZEL on 7/23/17.
//

#include "header.h"

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

int     get_precedence(char c)
{
    if (c == '*' || c == '/' || c == '%')
        return (2);
    else
        return (1);
}

char *getnextelement(char *str)
{
    int i;
    int j;
    char *num;

    i = 0;
    if (is_number(str[i]))
    {
        j = i + 1;
        while (is_number(str[j]))
            j++;
        num = (char*)malloc(sizeof(char) * (j + 1));
        return (ft_strncpy(num, str, (unsigned int)(j)));
    }
    else
        return (str);
}

void printArray_(char **a, int len) {
    for (int i = 0; i < len; i++) {
        printf("%s", a[i]);
        printf("%c", ' ');
    }
}

char    *shunting_yard(char *str)
{
    int     i;
    char    *nextelement;

    nextelement = (char*)malloc(sizeof(char) * 50);
    i = 0;
    while (*str != '\0')
    {
        while (str[0] == ' ')
            str++;
        nextelement = getnextelement(str);
        printf("Element is: %s\n", nextelement);
        if (is_number(nextelement[0]))
        {
            queue_insert(nextelement);
            while (is_number(str[0]) && (str[1] != '\0'))
                str++;
        }
        else if (is_operator(nextelement[0]))
        {
            while ((opstack.top != -1) &&
                    (get_precedence(opstack.stk[opstack.top]) >= get_precedence(nextelement[0]))
                    && (opstack.stk[opstack.top] != '('))
                queue_insert(pop());
            push(nextelement[0]);
        }
        else if (nextelement[0] == '(')
            push(nextelement[0]);
        else if (nextelement[0] == ')')
        {
            while (opstack.stk[opstack.top] != '(')
                queue_insert(pop());
            pop();
        }
        str++;
    }
    while (opstack.top != -1)
        if (opstack.stk[opstack.top] == '(')
            pop();
        else
            queue_insert(pop());

    printArray_(queue_array, 9);
    return ("done");
}
