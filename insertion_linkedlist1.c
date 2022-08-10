#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insertion(struct node *ptr, struct node *str)
{
    str->next = ptr;
    str->data = 20;
    ptr = str;

    return str;
}
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
    struct node *first;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // first->data = 20;
    head = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = NULL;
    linkedlist_traversal(head);
    head = insertion(head, first);
    linkedlist_traversal(head);

    return 0;
}