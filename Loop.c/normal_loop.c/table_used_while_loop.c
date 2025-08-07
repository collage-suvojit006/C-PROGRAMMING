#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
  int i = 1;
  while(i<=10){
     printf("%d * %d = %d\n",number,i,number*i);
     i++;
  }
  return 0;
}  