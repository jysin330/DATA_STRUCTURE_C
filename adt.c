# include<stdio.h>
#include<stdlib.h>
struct myarray{
 int total_size;
 int used_size;
 int *ptr;
};
void createArray(struct myarray *a, int tsize,int usize){
    //  (*a).total_size=tsize;
    //  (*a).used_size=usize;
    //  (*a).ptr=(int*) malloc(tsize*sizeof(int));
     a->total_size=tsize;
     a->used_size=usize;
     a->ptr=(int*) malloc(tsize*sizeof(int));
}
void set(struct myarray* a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter element %d\n", i+1);
        scanf("%d", &(a->ptr[i]));
    }
    

}
void show(struct myarray* a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", a->ptr[i]);
    }
    

}
int main(){
    struct myarray marks;
    createArray(&marks, 10,5);
    set(&marks);
    show(&marks);
    return 0;
}