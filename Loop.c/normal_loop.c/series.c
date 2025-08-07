//Print sum of series 1-2+3-4+5-6+7.. upto ‘n’ terms
#include<stdio.h>
int main(){
    int number,sum=0;
    printf("enter a number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(i%2==0){
         sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
 printf("sum:%d ",sum);
 return 0; 
}