# include<stdio.h>

int main(){
    int a[2][3];
    printf("enter the elements\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    return 0;
}