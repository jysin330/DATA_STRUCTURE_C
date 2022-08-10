# include<stdio.h>

int main(){
    int arr[10]={1,3,4,6,7};
    int size,pos1,pos2, num1,num2;
    printf("enter the no.: ");
    scanf("%d",&num1);
    printf("enter the no.: ");
    scanf("%d",&num2);
    printf("enter the size.: ");
    scanf("%d",&size);
    printf("enter the pos1: ");
    scanf("%d",&pos1);
    printf("enter the pos2: ");
    scanf("%d",&pos2);
     
     for(int i=(size-1); i>=(pos1-1);i--){
           
        arr[size]=arr[i];
        arr[size+1]=arr[size];
        arr[i]=arr[i-1];
    
    if(i==(pos1-1)){
        printf("the insertion takes place at 5th pos1 be : ");
        arr[(pos1-2)]=num1;
        printf("arr[%d]=%d\n\n",(pos1-1), num1);
    }
    size--;
    
    // size--;
     }
     for(int i=(pos1-1); i>=(pos2-1);i--){
         arr[pos1]=arr[i];
         
    if(i==(pos2-1)){
        printf("the insertion takes place at 2th pos2 be : ");
        arr[(pos2-1)]=num2;
        printf("arr[%d]=%d\n\n",(pos2-1), num2);
    }
    pos1--;
     }
     printf("the new array be after insertion be :\n ");
     for(int i=0;i<7;i++){
     
          printf("arr[%d]=%d\n",i,arr[i]);
     }
    

    return 0;
}