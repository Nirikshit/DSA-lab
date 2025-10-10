#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct stack
{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;

void push(STACK *s, int item)
{
    if (s->top==SIZE -1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}

void pop(STACK *s)
{
    if (s->top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("\nElement popped is %d\n",s->data[s->top]);
        s->top=s->top-1;
    }
}

void display(STACK s)
{
    if (s.top==-1)
    {
        printf("\nStack is empty ");
    }
    else
    {
        printf("\nStack contains are:\n");
        for (int i=s.top;i>=0;i--)
        {
            printf("%d\n",s.data[i]);
        }
    }
}

int main()
{
    int ch,item;
    STACK s;
    s.top=-1;
    while(1)
    {
        printf("\n############################################################\n");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nRead the choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\nRead the element to be pushed: ");
                scanf("%d",&item);
                push(&s,item);
                break;
            case 2:
                pop(&s);
                break;
            case 3:
                display(s);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
