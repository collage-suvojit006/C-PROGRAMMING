/*
print this pattern (number given by user )
1
A B
1 2 3
A B C D
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        int a=1;
        for(int j= 1;j<=i;j++){
            if(i%2==0){
                char ch= (char)a+64;
                printf(" %c ",ch);
                a++;
            }
            else{
                printf(" %d ",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}