#include<stdio.h>
int main(){
    int number,dig=0,sum=0; 
    printf("Enter a number :");
    scanf("%d",&number);
    while(number>0){
     dig= number % 10;
     sum=sum+dig;
     number = number /10;
    }
    printf("sum of the digits is : %d ",sum);
    return 0;
    
}