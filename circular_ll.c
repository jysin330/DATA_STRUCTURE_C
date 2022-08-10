
# include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
// -----> INSERTION AT THE BIGINNING
struct node *insertionLinkedlist(struct node* ptr,struct node* newnode){
    struct node* p=ptr->next;
    newnode->next=p;
           while(p->next!=ptr){
     p=p->next;
 }
 p->next=newnode;
 newnode->next =ptr;
          
           return newnode;
           

}
// ------> INSERTION AT THE END
struct node *insertionatEnd(struct node* ptr,struct node* newnode){
    struct node* p=ptr->next;
    newnode->next=p;
           while(p->next!=ptr){
     p=p->next;
 }
 p->next=newnode;
 newnode->next =ptr;
          
           return ptr;

}
// ------> INSERT AT BETWEEN
struct node *insertionIndexLinkedlist(struct node* ptr,struct node* newnode, int index){
           struct node* p=ptr;
           int i=0;
           while(i!=index-1){
               p=p->next;
               i++;
           }
           newnode->next=p->next;
           p->next=newnode;
return ptr;
              

}


void traversallinkedlist(struct node* ptr){
    struct node* p=ptr;

 do{
      printf("%d\n", p->data);
     p=p->next;
 }while(p!=ptr);
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
    third->next=head;
    // traversallinkedlist(head);
//    head=insertionLinkedlist(head, newnode);
//     traversallinkedlist(head);
    
    head=insertionIndexLinkedlist(head,newnode,1);
    
    traversallinkedlist(head);
    // head=insertionatEnd(head,newnode);
    // traversallinkedlist(head);
   
    return 0;
}