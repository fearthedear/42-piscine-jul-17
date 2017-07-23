//
// Created by Linus KINZEL on 7/23/17.
//

#include "header.h"

/*  Function to add an element to the stack */
void    push(char n)
{
    if (opstack.top == (9999 - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        opstack.top = opstack.top + 1;
        opstack.stk[opstack.top] = n;
    }
    return;
}

/*  Function to delete an element from the stack */
char    *pop(void)
{
    char *num;

    num = (char*)malloc(sizeof(char) * 2);
    if (opstack.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (0);
    }
    else
    {
        num[0] = opstack.stk[opstack.top];
        num[1] = '\0';
        printf ("popped element is = %c\n", opstack.stk[opstack.top]);
        opstack.top = opstack.top - 1;
    }
    return(num);
}