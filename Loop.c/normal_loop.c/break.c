#include<stdio.h>
int main(){
    int number;
    do{
        printf("Enter a number :");
        scanf("%d",&number);
       // printf("%d",number);
        if(number % 2 != 0){
             break;
        }
    }while(1);
    printf("you enter odd  number !!");
    return 0;
}