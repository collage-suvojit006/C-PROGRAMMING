/*
print this pattern (number given by user )
 A
 A   B
 A   B   C
 A   B   C   D
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(char j='A';j<=64+i;j++){
            printf(" %c  ",j);
        }
        printf("\n");
    } 
    return 0;
}    