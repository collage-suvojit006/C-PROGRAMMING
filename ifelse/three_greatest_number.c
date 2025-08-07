#include<stdio.h>
# include<stdlib.h>
int main(){
    int number_1,number_2,number_3;
    printf("Enter first number :");
    scanf("%d",&number_1);
   printf("Enter scaend number :");
    scanf("%d",&number_2);
    printf("Enter thard  number :");
    scanf("%d",&number_3);
    // process
  if (number_1 ==number_2 && number_1== number_3){
    printf("All Number are euqel !!");
    exit(0);
  }

  if(number_1> number_2 && number_1>number_3){
    printf("THE GREATES NUMBER : %d ",number_1);
  }
  else if(number_2>number_3){
     printf("THE GREATES NUMBER : %d ",number_2);
  }
  else{
        printf("THE GREATES NUMBER : %d ",number_3);
  }

  
    return 0;
}    