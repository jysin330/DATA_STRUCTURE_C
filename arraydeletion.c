# include<stdio.h>
void display(int arr[],int size){
    for(int i=0; i<size;i++){
    printf("%d\t", arr[i]);
 }
  printf("\n");
}
int arrdeletion(int arr[],int size,int index , int capacity){
 if(size>=capacity){
     return -1;
 }
 for(int i=index; i<=size-1;i++){
     arr[i]=arr[i+1];
 }
}
int main(){
    int arr[20]={1,2,3,4,5,6};
    int size=6,index=3;
     display(arr,size);
   
    arrdeletion(arr,size,index,20);
    size-=1;
     display(arr,size);
   
    return 0;
}