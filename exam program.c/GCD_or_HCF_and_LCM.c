# include<stdio.h>
int main(){
    int num1,num2,gcd,lcm,min;
    printf("Enter two integer : ");
    scanf("%d %d",&num1,&num2);
   // find the small number 
    if(num1>num2){
        min=num2;
    }
    else{
        min=num1;
    }

    for(int i=1;i<=min;i++){
        if(num1 % i==0 && num2 % i == 0){
            gcd=i;
        }
    }
    lcm=(num1*num2)/gcd;

    printf(" GCD/HCF= %d and LCM = %d ",gcd,lcm);
    return 0;
}