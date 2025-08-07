#include<stdio.h>
int main(){
    int number,dig=0,reverse=0; 
    printf("Enter a number :");
    scanf("%d",&number);
    while(number>0){
        dig=number % 10;
        reverse=reverse*10+dig;
        number=number/10;
    }
    printf("The Reverse digist is : %d ",reverse);
    return 0;
}    