# include<stdio.h>

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *p;
    p=&a[0][0];
    // p=a[0];
    printf("%p\n",p);
    printf("%p\n",a);
    printf("%p\n",&a[0][0]);
    printf("%p\n",&a);
    printf("%p\n",*a);
    printf("%p\n",a[0]);
    printf("%p\n",a+1);
    printf("%p\n",&a[1]);
    printf("%p\n",*(a+1));
    printf("%p\n",a[1]);
    printf("%p\n",&a[1][0]);
    printf("%p\n",*(a+1)+2);
    printf("%d\n",*(*(a+1)+2));
    
   
    return 0;
}