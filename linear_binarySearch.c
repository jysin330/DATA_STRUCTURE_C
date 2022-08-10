# include<stdio.h>
// int linearsearch(int arr[],int size, int element){
//  for (int i = 0; i < size-1; i++)
//  {
//     if(arr[i]==element){
//         return i;
//     }
//  }
//  return -1;
 
// }

int binarysearch(int arr[],int size, int element){
    int low=0,high=size -1 ;
    while(low<=high)
    {
    int mid=(low+high)/2;
        if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high =mid-1;
    }}
    return -1;
}
int main(){
    // unsorted array linear search---->
    // int arr[]={1,34, 45,12,56,78};
    // int size=sizeof(arr)/sizeof(int),element=34;
    // int searchindex= linearsearch(arr,size,element);
    // printf("the element found at index %d ", searchindex);
    int arr[]={1,34, 45,112,546,758};
    int size=sizeof(arr)/sizeof(int),element=546;
    int searchindex= binarysearch(arr,size,element);
    printf("the element found at index %d ", searchindex);
    return 0;
}