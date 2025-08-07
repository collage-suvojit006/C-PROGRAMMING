#include<stdio.h>
int digisum(int n);
int main(){
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   printf("%d  digits sum is : %d  ",n,digisum(n));
    return 0;
}
// calculeat digits sum function 
int digisum(int n){
    int sum=0;
    while(n>0){ 
    int digi= n %10;
    sum= sum+digi;
    n=n/10; 
    }
    return sum;
}