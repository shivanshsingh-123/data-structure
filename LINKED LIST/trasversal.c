#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void transversal(struct node *ptr)
{
    while(ptr != NULL)
  {
    printf("Element: %d\n",ptr->data);
    ptr = ptr->next;
  }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node * fourth;

 // Allocate Memory For Nodes in the Linked List in Heap

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

     // Link the first and second node 

    head->data = 45;
    head->next = second;

     // Link the second and third node

    second->data = 18;
    second->next = third;
     
    // Link the third and fourth node 

    third->data = 33;
    third->next=fourth;

    // Terminate the list at fourth node 

    fourth->data = 83;
    fourth->next = NULL;

    transversal(head);
    return 0;




}
