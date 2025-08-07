#include<stdio.h>
int main(){
 printf("Armstrong number between 1 - 500\n");
 for(int i=1;i<=500;i++){
      int temp=i,sum=0,remainder;
    // calculate sum of power (3)
      temp=i;
      while(temp>0){
        remainder= temp % 10;
        int power = remainder*remainder*remainder;
        sum=sum+power;
        temp=temp/10;
      }
      if(sum==i){
         printf("%d\n",sum);
      }  
   }


   
    return 0;
}