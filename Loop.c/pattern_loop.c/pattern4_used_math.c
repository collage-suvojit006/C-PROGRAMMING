/*
print this pattern (number given by user )used math
* * * * *
* * * *
* * *
* *
*
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    for(int i= 1;i<=number;i++){
          for(int j =1;j<=number+1-i;j++){
             printf("* ");
          }
        printf("\n");
        
    }
    return 0;
}