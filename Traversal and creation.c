#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;  /* data */
};
void linkedListtraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr= ptr->next;
    }

}

int main()
{
    struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
head = (struct Node *)malloc(sizeof(struct Node));
second =(struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth = (struct Node *)malloc(sizeof(struct Node));

head->data = 7;
head->next = second;
second->data = 11;
second->next = third;
third->data = 41;
third->next = fourth;
fourth->data = 66;
fourth->next =NULL;
    
    linkedListtraversal(head);
    return 0;
}
