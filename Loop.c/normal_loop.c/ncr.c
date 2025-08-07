#include<stdio.h>
int main(){
    int n,r; float ncr;
    long int f1=1,f2=1,f3=1;
    printf("Enter n and r :");
    scanf("%d %d",&n,&r);
 if(n>r){   
    for(int i=1;i<=n;i++){
        f1=f1*i;
    }
    for(int i=1;i<=r;i++){
        f2=f2*i;
    }
    for(int i=1;i<=n-r;i++){
        f3=f3*i;
    }
    ncr=f1/(f2*f3);
    printf("NcR of %d  and %d is %f",n,r,ncr);
 } 
 else{
    printf(" Error !!  r can not be bigher then n");
 }
    return 0;
}