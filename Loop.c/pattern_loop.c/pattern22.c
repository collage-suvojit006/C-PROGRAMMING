#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        //number 
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        // extra number 
       int a= i-1;
        for(int l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
       printf("\n");
    }
    
    return 0;
}
