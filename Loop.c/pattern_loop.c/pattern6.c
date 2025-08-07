/*
print this pattern (number given by user )
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
#include<stdio.h>
int main(){
    //input to user
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    //sloving normal
    printf("sloving normal:-\n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
       printf("\n"); 
    }
    //sloving  used math
    printf("\n\n");
    printf("sloving with math:-\n");
    for(int i= 1;i<=n;i++){
          for(int j =1;j<=n+1-i;j++){
             printf("%d ",j);
          }
        printf("\n");
        
    }
    return 0;
}