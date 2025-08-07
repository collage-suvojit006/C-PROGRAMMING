#include<stdio.h>
int main(){
    int num,start;
    printf("enter straning number:");
    scanf("%d",&start);
    printf("Enter a number :");
    scanf("%d",&num);
    for(int i=start;i<=num;i=i+1){
       if(i % 2 ==0){
        printf("even number :%d\n",i);
       }
       else{
        printf("odd number : %d \n ", i);
       }
       //num=num-1;
    }
    return 0;
}