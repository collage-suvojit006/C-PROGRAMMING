#include<stdio.h>
int main(){
    int number_1,number_2,number_3;
    printf("Enter first number :");
    scanf("%d",&number_1);
   printf("Enter scaend number :");
    scanf("%d",&number_2);
    printf("Enter thard  number :");
    scanf("%d",&number_3);
    //process
  if(number_1 != number_2 && number_1 != number_3){  
         if(number_1<number_2){
              if(number_1<number_3){
                  printf("%d is smallest",number_1);
                }
               else{
                    printf("%d is smallest",number_3);
                }
           }
          else{
              if(number_2<number_3){
                    printf("%d is smallest",number_2);
                }
               else{
                     printf("%d is smallest",number_3);
                   }
          }
  }
   else if(number_1==number_2  && number_3!= number_1 && number_3<number_1){
        printf("number 1 and nnumber 2 are equal so number 3 is smallest : %d",number_3);
    }
    else if (number_1==number_3 && number_3 != number_2 ){
       printf("number 1 and nnumber 3 are equal so number 2 is smallest : %d",number_2);  
    }
    else if (number_2==number_3 && number_2!= number_1){
        printf("number 2 and nnumber 3 are equal so number 1 is smallest : %d",number_1);
    }
    else{
        printf("All number are equal ");
    }         
    return 0;
}