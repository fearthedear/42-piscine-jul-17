//
// Created by Linus KINZEL on 7/23/17.
//

#include "header.h"

int rear = - 1;
int front = - 1;

void    queue_insert(char *n)
{
    if (rear == 9999 - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
            /*If queue is initially empty */
            front = 0;
        rear = rear + 1;
        queue_array[rear] = n;
        printf("insterted into queue: %s\n", n);
    }
}