#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlist_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//--------> insertion at first
// struct node *insertion(struct node *ptr, int data)
// {

//     struct node *str;
//     str = (struct node *)malloc(sizeof(struct node));
//     str->next = ptr;
//     str->data = data;

//     return str;
// }

//------> in between insertion
// struct node *insertatindex(struct node *head, int data,int index)
// {
//    struct node * str = (struct node *)malloc(sizeof(struct node));
//    struct node * p=head;
//    int i=0;
//    while(i!=(index-1)){
//        p=p->next;
//        i++;
//    }
//    str->next=p->next;
//    str->data=data;
//    p->next=str;

// }
 
 //--------> insert at last

//(// struct node *insertionatlast(struct node *last, int data){
//   struct node *  ptr = (struct node *)malloc(sizeof(struct node));
//       last->next=ptr;
//       ptr->data=data;
//       ptr->next=NULL;
// })----->this is my rule.........

struct node *insertionatlast(struct node *head, int data)
{
   struct node * str = (struct node *)malloc(sizeof(struct node));
   struct node * p=head;
   
   while(p->next!=NULL){
       p=p->next;
       
   }
   p->next=str;
   str->data=data;
   str->next=NULL;
     return head;
}
int main()
{
    struct node *head;
    //allocate memory for nodes in linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 13;
    third->next = NULL;
    linkedlist_traversal(head);

    // insertatindex(head, 11,1);
    // head = insertion(head, 11);
    head=insertionatlast(head,14);
    linkedlist_traversal(head);
    return 0;
}