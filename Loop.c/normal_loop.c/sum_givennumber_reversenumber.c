#include<stdio.h>
int main(){
    // input number form user 
    int number,dig=0,reverse=0,sum;
     printf("Enter a number :");
    scanf("%d",&number);
   
    // duplicates tne number 
   
    int temp = number;
   
   
   // calculate the reverse number 
    while(number>0){
        dig=number % 10;
        reverse=reverse*10+dig;
        number=number/10;
    }
   // calcutate sum
     sum = temp + reverse;  
   
   
   
   // output
    printf("The  Orignal numbeer is : %d \n",temp);
    printf("the reverse number is :%d\n",reverse);
    printf("The sum of given number and reverse number is :%d \n",sum);
    return 0;
}    
