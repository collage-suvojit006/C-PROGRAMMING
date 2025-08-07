#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter a base :");
    scanf("%d",&a);
    printf("enter a power:");
    scanf("%d",&b);
    c=pow(a,b);
    printf("the value is :%d",c);
    return 0;
}