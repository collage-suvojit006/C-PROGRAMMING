//display the Gp=1,2,4,8,16,32....n (upto n terms)
#include<stdio.h>
int main(){
    int number,gp=1;
    printf("Enter a number :");
    scanf("%d",&number);
    
    for(int i=1;i<=number;i++){
        printf("%d ",gp);
        gp=gp*2;
    }
    return 0;

}