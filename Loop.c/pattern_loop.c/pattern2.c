/*
print this pattern (number given by user )
12345
12345
12345
12345
12345
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    for(int i= 1;i<=number;i++){
          for(int j =1;j<=number;j++){
             printf("%d ",j);
          }
        printf("\n");
        
    }
    return 0;
}