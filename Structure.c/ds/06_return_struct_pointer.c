# include<stdio.h>
# include<stdlib.h>
typedef struct pointer{ // create our own data type
    int x;
    int y;
}pointer;  // rename data (struct pointer = pointer) using typedef function 
pointer *fun(int a,int b){  // create  a pointer  function  of pointer data type
    pointer *ptr=(pointer *)malloc(sizeof(pointer));  // allocated memory in heap for pointer data type size 
    ptr->x=a+2; // ptr is a pointer to acess the member of pointer data type
    ptr->y=b+2;
    return ptr;  // return the pointer address;
}
void print(pointer *ptr){  // create a function to print the element 
    printf("%d %d\n",ptr->x,ptr->y);  // acess the element using pointer
}
int main(){
    pointer *ptr1,*ptr2;  // create to pointer variable 
    ptr1= fun(2,4); // call the fun function
    ptr2= fun(8,9);  // call the fun function
    print(ptr1);   // call print function
    print(ptr2);   // call print function

    free(ptr1);   // fre the allocet memory 
    free(ptr2);
    ptr1=NULL;  // pointer set to null
    ptr2=NULL;

    return 0;
}