
# include<stdio.h>
# include<stdlib.h>
# include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
// -----> INSERTION AT THE BIGINNING
struct node *insertionLinkedlist(struct node* ptr,struct node* newnode){
           newnode->next=ptr;
           return newnode;
           

}
// ------> INSERTION AT THE END
struct node *insertionatEnd(struct node* p,struct node* newnode){
    struct node* ptr=p;
           while(ptr->next!=NULL){
               ptr=ptr->next;
           }
           ptr->next=newnode;
           newnode->next=NULL;
           return p;

}
// ------> INSERT AT BETWEEN
struct node *insertionIndexLinkedlist(struct node* ptr,struct node* newnode, int index){
           int i=0;
           struct node* p=ptr;
           while(i!=index-1){
               p=p->next;
               i++;
           }
               newnode->next=p->next;
               p->next=newnode;
              
return ptr;
              

}

void insertedlinkedlist(struct node* ptr){
 while(ptr!=NULL){
      printf("%d\n", ptr->data);
     ptr=ptr->next;
 }
}
int main(){
    struct node* head,*second,*third,*newnode;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter the newnode data:");
      scanf("%d",&(*newnode).data);
    head->data=12;
    head->next=second;
    second->data=56;
    second->next=third;
    third->data=45;
    third->next=NULL;
//    head=insertionLinkedlist(head, newnode);
    // insertedlinkedlist(head);
    // head=insertionIndexLinkedlist(head,newnode,2);
    // insertedlinkedlist(head);
    head=insertionatEnd(head,newnode);
    insertedlinkedlist(head);
    return 0;
}