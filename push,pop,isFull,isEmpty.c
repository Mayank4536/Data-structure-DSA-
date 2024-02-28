#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int*arr;
};

int isEmpty(struct stack*ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFULL(struct stack *ptr)
{
    if(ptr->top == ptr->size-1 )
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if(isFULL(ptr))
    {
        printf("stack overflow! cammot push %d to the stack",val);

    }
    else{
ptr->top++;
ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stcak underflow! cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size* sizeof(int));
    printf("Stack has been created successfully");

printf("Before pushing,FULL: %d\n",isFULL(sp));
printf("Before pushing,Empty: %d\n", isEmpty(sp));

push(sp,34);
push(sp,36);
push(sp,33);
push(sp,45);
push(sp,63);
push(sp,89);
push(sp,23);
push(sp,78);
push(sp,12);
push(sp,20);

printf("After pushing, FULL: %d\n", isFULL(sp));
printf("after pushing, Empty: %d\n",isEmpty(sp));
    return 0;
}