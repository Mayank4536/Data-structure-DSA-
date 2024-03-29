#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char*arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFULL(struct stack *ptr)
{
    if(ptr->top == ptr->size -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr,char val)
{
    if(isFULL(ptr))
    {
        printf("stack overflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow!\n");
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char* exp)
//Create and initialize the stack
{
struct stack* sp;
sp->size = 100;
sp->top = -1;
sp->arr = (char*)malloc(sp->size*sizeof(char));

for(int i=0; exp[i]!='\0'; i++)
{
    if(exp[i] == '('){
        push(sp,'(');
    }
    else if(exp[i] ==')')
    {
        if(isEmpty(sp))
        {
            return 0;
        }
        pop(sp);
    }
}
if(isEmpty(sp))
{
    return 1;
}
else{
    return 0;
}
}

int main()
{
    char* exp = "((8)(*--$$9))";
    //check if stack is empty
    if(parenthesisMatch(exp))
    {
        printf("The Parenthesis is matching");

    }
    else{
        printf("The parenthesis is not matching");
    }

    return 0;
}