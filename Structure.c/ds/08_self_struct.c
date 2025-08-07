# include <stdio.h>
struct code {
    int a;
    char b;
    struct code *ptr;
};

int main(){
    struct code val1;
    struct code val2;

    val1.a=65;
    val1.b='A';  // assing value 
    val1.ptr=NULL;

    val2.a=66;
    val2.b='B';   // assing value 
    val2.ptr=NULL;

    val1.ptr=&val2;  // val1 member ptr is containt val2 address

    printf("%d %c", val1.ptr->a, val1.ptr->b);  // print the val2 data using val1
    return 0;
}