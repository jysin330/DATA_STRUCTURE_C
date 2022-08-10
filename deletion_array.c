# include<stdio.h>

int main(){
    int arr[10]={1,2,3,3,4,5};
    int size,pos;
    scanf("%d",&size);
    scanf("%d",&pos);
    if(pos<=0 || pos>size){
        printf("invalied position\n");
    }
    else{
    for(int i=(pos-1); i<size;i++){
        arr[i]=arr[pos];
        pos++;
    }
    for(int i=0; i<(size-1);i++){
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    }
    return 0;
}