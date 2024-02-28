#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node *next;
};

void linkedListTraversal(struct Node*head)
 {
     struct Node *ptr = head;
    do   
     {
      printf("element is:%d\n",ptr->data);
      ptr = ptr-> next;  /* code */
    } 
    while(ptr != head);

// void linkedListTraversal(struct Node*head)
// {
//     struct Node *ptr =head;
//    while(ptr!=NULL)
//    {
//     printf("%d",ptr->data);
//     ptr=ptr->next;
   }


struct Node*insertAtFirst(struct Node*head,int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while(p->next != head)
    {
        p =p->next;
    }
    //At this point p points to the last element node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

head->data = 4;
head->next= second;
second->data = 3;
second->next = third;
third->data = 6;
third->next = fourth;
fourth->data = 1;
fourth->next = head;

printf("circular Linked list before insertion\n");
linkedListTraversal(head);
head = insertAtFirst(head,54);
head = insertAtFirst(head,58);
head = insertAtFirst(head,59);
printf("Circular linked List After insertion\n");
linkedListTraversal(head);

return 0;
}