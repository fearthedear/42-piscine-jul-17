//
// Created by Linus KINZEL on 7/23/17.
//

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}