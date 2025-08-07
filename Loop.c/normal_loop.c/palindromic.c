#include<stdio.h>
int main(){
    int number,lastdigts,reverse;
    printf("Enter a number :");
    scanf("%d",&number);
    int temp=number;
  if(temp>10){ 
    while(temp>0){
       lastdigts=temp%10;
       reverse=reverse*10+lastdigts;
       temp=temp/10;

    } 
    if(number==reverse){
        printf("%d is palindromic number ",number);

    }
    else{
        printf("%d is a not palindromic number ",number);
    }

  } 
  else{
    printf("invalid number plase enter  above 10 !!");
  }
    return 0;
}