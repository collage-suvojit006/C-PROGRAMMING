#include<stdio.h>
int sumn(int n);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("THE sum of %d is : %d ",n,sumn(n));
    return 0;
}

int sumn(int n){
    if (n==0)
    return 0;
    else{
    //     int sum_n_1=sumn(n-1);
    //     int sum_n=sum_n_1+n;
    return sumn(n-1)+n;
    }
}