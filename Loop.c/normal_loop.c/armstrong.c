#include<stdio.h>
int main(){
    int number,sum=0,temp,lastdigts;
    printf("Enter a number :");
    scanf("%d",&number);
    temp=number;
    for(int i=1;number>0;i++){
     lastdigts=number%10;
     sum=sum+lastdigts*lastdigts*lastdigts;
     number=number/10;
    }
    if(temp==sum){
        printf("%d is armstrong number",temp);
    }
    else{
        printf("%d is  not armstrong number",temp);
    }
    return 0;
}