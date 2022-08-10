# include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5};
    int size=5;
    int n,position;
    scanf("%d",&n);
    scanf("%d",&position);
    // for(int i=(size-1); i>=position;i--){
    //     arr[size]=arr[i];
    //     arr[i]=arr[i-1];
    //    size--;
    //   if(i==position){
    //     arr[position-1]=n;
    //   }
    // }
    // for(int i=0;i<6;i++){
    //     printf("%d\n",arr[i]);
    // }
    for(int i=(position-1); i>=position;i--){
        arr[size]=arr[i];
        arr[i]=arr[i-1];
       size--;
      if(i==position){
        arr[position-1]=n;
      }
    }
    for(int i=0;i<6;i++){
    printf("%d\n",arr[i]);
    }
   
    return 0;
}