#include<stdio.h>
int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);

    // swap them 
    a= a+b;
    b=a-b;
    a=a-b;
    printf(" a is : %d ",a);
    printf(" b is : %d ",b);



    return 0;
}