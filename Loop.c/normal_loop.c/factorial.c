#include<stdio.h>
int main(){
    int number; long fac=1;
    printf("enter a number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        fac=fac*i;
    }
    printf("%d factorial is :%ld",number,fac);
    return 0;
}    