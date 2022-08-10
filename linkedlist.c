# include<stdio.h>
# include<stdlib.h>
struct node{
int data;
struct node* next;
};
void linkedlistTraversal(struct node* ptr){
 while(ptr!=NULL){
     printf("%d\n", ptr->data);
     ptr=ptr->next;
 }
}
int main(){
    struct node* head, *second,*third;
    head= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=2;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=NULL;
 linkedlistTraversal(head);

    return 0;
}