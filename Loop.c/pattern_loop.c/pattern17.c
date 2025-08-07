/*
print this pattern (number given by user )
    A
   AB
  ABC
 ABCD
ABCDE
*/
#include<stdio.h>
int main(){
   int row;
   printf("Enter a Row :");
   scanf("%d",&row);
 for(int i=1;i<=row;i++){
    for(int j=1;j<=row-i;j++){
        printf(" ");
    }
    int a=1;
    for(int k=1;k<=i;k++){
       char ch= (char)a+64; 
        printf("%c",ch);
        a++;
    }
    printf("\n");
 }
   
   
    return 0;
}