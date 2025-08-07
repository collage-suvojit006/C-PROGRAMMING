#include<stdio.h>
void factorial(int n);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // coll fun
    factorial(n);
    return 0; 
}
void factorial(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    printf(" %d Factorial is : %d ",n,fac);
}