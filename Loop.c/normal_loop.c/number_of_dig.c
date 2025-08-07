#include<stdio.h>
int main(){
    int number,count=0;
    printf("Enter a number :");
    scanf("%d",&number);
    while(number>0){
       number=number/10;
        count++;
    }
 printf("the number of digities of the number : %d",count);
 return 0;

}



 