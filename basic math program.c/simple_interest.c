//simple interest formula = (principal*rate of interest * time ) /100
#include<stdio.h>
int main(){
    float principal=0,rate_of_interest=0,time=0,interest=0;
    printf("Enter principal Amount :");
    scanf("%f",&principal);
    printf("\nEnter rate of interest :");
    scanf("%f",&rate_of_interest);
    printf("\nEnter a time(in year):");
    scanf("%f",&time);
    interest= (principal*rate_of_interest*time)/100;
    printf("The is tha simple interest: %f\n",interest);
    float total_amount = principal+interest;
    printf("The Total amount (with interest):%f + %f = %f",principal,interest,total_amount);
    return 0;
} 
