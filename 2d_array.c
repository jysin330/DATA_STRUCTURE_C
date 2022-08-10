# include<stdio.h>

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *p;
    
    p=a[0];
    
    // p=&a[0][0];
    printf("%p\n",&a[0][0]);
    printf("%p\n",p);
    printf("%u\n",a);
    printf("%u\n",&a);
    printf("%x\n",*a);
    printf("%p\n",a[0]);
    printf("%u\n",a+1);
    printf("%u\n",*(a+1));
    printf("%u\n",a[1]);
    printf("%u\n",&a[1]);
    printf("%u\n",*(a+1)+2);
    printf("%d\n",*(*(a+1)+2));
    printf("%d\n",*(*a+1));
    printf("%d\n",**a);
    printf("%u\n",a[1]+1);
    printf("%u\n",&a[1]+1);
    printf("%u\n",&a[1]+2);
    // printf("%d\n", **p); //compile time error
    return 0;
}