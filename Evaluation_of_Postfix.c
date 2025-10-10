#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define SIZE 20

struct stack
{
    int top;
    float data[SIZE];
};
typedef struct stack STACK;

void push(STACK *s, float item)
{
    s->data[++(s->top)]=item;
}

float pop(STACK *s)
{
    return s->data[(s->top)--];
}

float compute(float op1,char symbol,float op2)
{
    switch(symbol)
    {
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': return op1/op2;
        case '^': return pow(op1,op2);
    }
}

float eval(STACK *s ,char postfix[20])
{
    char symbol;
    float op1,op2,res;

    for (int i=0;postfix[i]='\0';i++)
    {
        symbol=postfix[i];
        if (isdigit(symbol))
        {
            push(s,symbol - '0');
        }
        else
        {
            op2=pop(s);
            op1=pop(s);
            res=compute(op1,symbol,op2);
            push(s,res);
        }
    }
    return pop(s);
}


int main()
{
    char postfix[20];
    float ans;
    STACK s;
    s.top=-1;
    printf("\nRead postfix expression : ");
    scanf("%s",postfix);
    ans=eval(&s,postfix);
    printf("\nThe final result is %f ",ans);
    return 0;
}
