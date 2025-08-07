#include<stdio.h>
#include<math.h>
// int numpower;
void  power(int y);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    power(n); 
    return 0;
}

void power(int x){
int  numpower=pow(x,2);
 printf("The Squear is : %d",numpower);
}