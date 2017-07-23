//
// Created by Linus KINZEL on 7/23/17.
//

#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char    *shunting_yard(char *str);
char    *read_rpn(char *str);
void    ft_putchar(char c);
int     ft_atoi(char *str);
int     ft_strlen(char *str);
void    push(char n);
char    *pop(void);
void    queue_insert(char *n);
char    *ft_strncpy(char *dest, char *src, unsigned int n);

char *queue_array[9999];

struct stack
{
    char stk[9999];
    int top;
};
typedef struct stack STACK;
STACK opstack;

#endif
