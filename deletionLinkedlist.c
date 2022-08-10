# include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
// -----> DELETION AT FIRST
struct node* deletionAtFirst(struct node* ptr){
           struct node* p=ptr;
           ptr=ptr->next;
           free(p);
           return ptr;
}
// -----> DELETION AT END
struct node* deletionAtEnd(struct node* ptr){
           struct node* p=ptr->next;
             
           struct node* q=ptr;
           while(p->next!=NULL){
               q=q->next;
               p=p->next;

           }
           q->next=NULL;
           free(p);
           return ptr;
}
// ------- DELETION IN BETWEEN
struct node* deletionInBetween(struct node* ptr,int index){
           struct node* p=ptr;
           int i=0;
           while (i!=index-1){
           p=p->next;
           i++;
           }
           struct node*q=p->next;
             p->next=q->next;
             free(q);
           return ptr;
}
void deletedlinkedlist(struct node* ptr){
 while(ptr!=NULL){
      printf("%d\n", ptr->data);
     ptr=ptr->next;
 }
}
int main(){
    struct node* head, *first,*second,*third,*fourth,*fifth;
    // head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    // head->next=first;
    first->next=second;
    first->data=10;
    second->next=third;
    second->data=20;
    third->next=fourth;
    third->data=30;
    fourth->next=fifth;
    fourth->data=40;
    fifth->next=NULL;
    fifth->data=50;
    // first=deletionAtFirst(first);
    // deletedlinkedlist(first);
    first=deletionAtEnd(first);
    deletedlinkedlist(first);
    // first=deletionInBetween(first,3);
    // deletedlinkedlist(first);

        return 0;
}