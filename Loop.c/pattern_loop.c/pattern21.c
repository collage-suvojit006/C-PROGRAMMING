/*
print this pattern (number given by user )
   A
   A B
  A B C
 A B C D
A B C D E
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
        printf(" ");
       }
       
       for(char k= 'A';k<=64+i;k++){
         printf("%c ",k);
         
       }
       
       printf("\n");
    }
    return 0;
}
