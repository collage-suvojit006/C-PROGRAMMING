#include<stdio.h>
int main(){
    int a=5;
    int *x=&a;
    printf("%p\n",x); // adderss of a
    printf("%p\n",&a); // address of a
    printf("%p\n",&x); // address of x
    printf("%d\n",a); // value of a
    printf("%d\n",*x); // value of a
    printf("%d\n",*(&a));// value of a 
    *x=9;//Change value a 
    printf("%d\n",a);
    printf("%d\n",*x);

    // duble pointer 
    int **y=&x;
    printf("%p\n",y);
    printf("%p\n",*y);
    printf("%d\n",**y);


    return 0;
}