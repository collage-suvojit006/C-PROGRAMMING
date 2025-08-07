#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter a number :");
    scanf("%d",&num);
        for(int i=2;i<num;i++){
          if(num % i == 0){
             count=1;
             break;
          }
        }
    //final result
    if(num==1){
          printf("%d   is not a prime or not prime number !!",num);

    }
   else if(count==0) {
        printf("%d is a prime number ",num);
    }
    else{
        printf("%d is a not prime number ",num);
    }
   return 0;
}