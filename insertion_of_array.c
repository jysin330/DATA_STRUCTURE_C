# include<stdio.h>

int main(){
    int arr[10]={2,3,4,6,7};
    int size,position, num;
    printf("enter the no.: ");
    scanf("%d",&num);
    printf("enter the size.: ");
    scanf("%d",&size);
    printf("enter the position: ");
    scanf("%d",&position);
     
     for(int i=(size-1); i>=(position-1);i--){
         arr[size]=arr[i];
    if(i==(position-1)){
        printf("the insertion takes place at 4th position be : ");
        arr[(position-1)]=num;
        printf("arr[%d]=%d\n\n",(position-1), num);
    }
    size--;
     }
     printf("the new array be after insertion be :\n ");
     for(int i=0;i<6;i++){
     
          printf("arr[%d]=%d\n",i,arr[i]);
     }
    

    return 0;
}