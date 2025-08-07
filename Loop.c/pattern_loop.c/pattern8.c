/*
print this pattern (number given by user )
 A   B   C   D
 A   B   C   D
 A   B   C   D
 A   B   C   D
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(char j='A';j<=64+number;j++){
            printf(" %c  ",j);
        }
        printf("\n");
    } 
    printf("\n\n");

    // using type casting (8.1);
    printf("using type casting\n");
    for(int i=1;i<=number;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            char ch =(char)a+64;
            printf(" %c  ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}