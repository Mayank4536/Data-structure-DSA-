#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

//case 1:
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//case 2:
struct Node *deleteAtIndex(struct Node*head,int index)
{
    struct Node *p = head;
    struct Node*q = head->next;
    for(int i = 0;i<index-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

//case 3:
struct Node* deleteAtLast(struct Node *head)
{
    struct Node *p= head;
    struct Node*q = head->next;
    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next  = NULL;
    free(q);
    return head;
}

//case 4:
struct Node *deleteIndex(struct Node*head,int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && p->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data==value)
    {
        p->next  = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth  = (struct Node*)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next  = third;
    third-> data = 8;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before Deletion\n");
    linkedListTraversal(head);
    // head = deleteFirst(head);
    // head  = deleteAtIndex(head,2);
    head = deleteAtLast(head);

printf("Linked List after Deletion\n");
linkedListTraversal(head);
return 0;

}