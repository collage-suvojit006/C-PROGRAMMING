#include<stdio.h>
int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);

    // swap them 
    int temp=a;
    a=b;
    b=temp;
    printf(" a is : %d ",a);
    printf(" b is : %d ",b);



    return 0;
}