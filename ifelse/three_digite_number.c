#include<stdio.h>
int main(){
     int num;
        printf("Enter a number :");
        scanf("%d",&num);
        if(num>99 && num<1000){
            printf("the number is three digites number :%d",num);
        }
        else{
            printf("the number is not  three digites number :%d",num);
        }

        return 0;
    

    
}