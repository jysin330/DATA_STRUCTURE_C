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
    third->data = 10;
    third->next = NULL;
    linkedlist_traversal(head);

    return 0;

}