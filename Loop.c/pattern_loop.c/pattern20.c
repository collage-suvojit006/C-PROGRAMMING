/*
print this pattern (number given by user )
    1
   123
  12345
 1234567
123456789
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lone:"); scanf("%d",&n);
    for(int i=1;i<=n;i++ ){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
       
        for(int k=1;k<=2*i-1;k++){
            printf("%d",k);
            
        }
       // nst++;
       printf("\n");
    }
    return 0;
}