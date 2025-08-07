#include<stdio.h>
int main (){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    if (number<0){
        number= number * (-1);
    } 
    printf("your absolute value is :%d",number);
    return 0;
}