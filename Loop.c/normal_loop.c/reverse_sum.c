#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter a number:");
    scanf("%d",&n); 
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("the sum is : %d",sum);
    return 0;
}