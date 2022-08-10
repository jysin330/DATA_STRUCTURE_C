# include<stdio.h>
void display(int arr[],int n){
    // traversal

 for(int i=0; i<n;i++){
    printf("%d\t", arr[i]);
 }
  printf("\n");
 
}
int indinsertion(int arr[],int size, int element,int capacity, int index){
    // code for insertion
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[20]={1,2,34,4,5,6};
    int size=6, element=23,index=4;
    display(arr,6);
    indinsertion(arr,size,element,20,index);
    size+=1;
    display(arr,size);
    return 0;
}