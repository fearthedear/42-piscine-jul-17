//
// Created by Linus KINZEL on 7/23/17.
//


struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK opstack;

void push(void);
int  pop(void);
void display(void);

void main ()
{
    int choice;
    int option = 1;
    opstack.top = -1;

    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}
/*  Function to add an element to the stack */
void push ()
{
    int num;
    if (opstack.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        opstack.top = opstack.top + 1;
        opstack.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (opstack.top);
    }
    else
    {
        num = opstack.stk[opstack.top];
        printf ("popped element is = %dn", opstack.stk[opstack.top]);
        opstack.top = s.top - 1;
    }
    return(num);
}