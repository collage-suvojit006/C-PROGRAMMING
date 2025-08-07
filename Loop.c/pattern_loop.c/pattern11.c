#include<stdio.h>
int main(){
    int row;
    printf("Enter number of rows:");
    scanf("%d",&row);
    int columns;
    printf("number of columns :");
    scanf("%d",&columns);
    for(int i=1;i<=row;i++){
        for(int j= 1; j<=columns;j++){
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}