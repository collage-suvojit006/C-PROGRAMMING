/*
print this pattern (number given by user )
1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
       int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;

        }
        printf("\n");
    }
    return 0;
}