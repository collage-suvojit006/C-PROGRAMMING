#include<stdio.h>
float caluleat(float x);
int main(){
    int c;
    printf("Enter culceus : :");
     scanf("%d",&c);
     float f;
     f=caluleat(c);
     printf("The furniture is : %f ",f);
    return 0;
}

float caluleat(float x){
    float  far= x*(9.0/5.0)+32;
    return far;
}