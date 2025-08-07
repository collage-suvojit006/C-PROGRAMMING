/*
print this pattern (number given by user )
   *
   *
   *
*******
   *
   *
   *
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
  if(number %2 !=0){ 
     for(int i=1;i<= number;i++){
        for(int j=1;j<=number;j++ ){
          int a= number/2+1;
           if(i== a || j==a){
              printf("*");
           }
            else{
              printf(" ");
           }
        }
        printf("\n");
      }
   } 
   else{
    printf("this pattern only for odd number !"); 
   }
    return 0;
}