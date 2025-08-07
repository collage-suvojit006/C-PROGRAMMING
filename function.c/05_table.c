#include<stdio.h>
void table(int n);
int main(){
    printf("Enter  a number : ");
    int n;
    scanf("%d",&n);
    table(n);
    
    return 0;
}

void table(int x){
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d \n",x,i,x*i);
    }
}