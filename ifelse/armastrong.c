#include<stdio.h>
# include<stdlib.h>
int main(){
    int num,temp,rem,result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp = num;
    // calculate power of armstrong numbar 
    if(num>999){
      printf("The program only for three degitrs number !!");
      exit(1);
    }
    if (temp>0){
        rem=temp%10;
        result = result + rem*rem*rem; 
        temp = temp /10;
     if(temp>0){
            rem=temp%10;
            result = result + rem*rem*rem; 
            temp = temp /10;   
        
           if(temp>0){
              rem=temp%10;
              result = result + rem*rem*rem; 
              temp = temp /10;
        
             
           }
        }
    }
    // our final output code 
    if(result == num ){
                printf("The number is Aramstrong ");
             }
              else{
                printf("the number is not a areamstrong number");
             }
 return 0;
} 
