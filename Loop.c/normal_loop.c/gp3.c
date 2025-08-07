//Print the GP - 100,50,25.. upto ‘n’ terms
#include<stdio.h>
int main(){
    int number;float gp=100.0;
    printf("Enter a number :");
    scanf("%d",&number);
    
    for(int i=1;i<=number;i++){
        printf("%f ",gp);
        gp=gp*1/2;
    }
    return 0;

}