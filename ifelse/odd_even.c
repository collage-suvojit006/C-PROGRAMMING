#include<stdio.h>
int main(){
    int number;
    printf("enter a number :");
    scanf("%d",&number);
    if(number>1 && 0){
        if(number % 2 == 0){
            printf("%d is an even number ",number);
        }
        else{
            printf("%d is  an  odd number ", number ); 
        }
    }
    else{
        printf("%d is a not even or odd number !!",number);
    }
    return 0;

}