//display the Gp=3,12,48,192....n (upto n terms)
#include<stdio.h>
int main(){
    int number,gp=3;
    printf("Enter a number :");
    scanf("%d",&number);
    
    for(int i=1;i<=number;i++){
        printf("%d ",gp);
         gp=gp*4;
    }
    return 0;

}