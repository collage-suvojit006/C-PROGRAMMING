//display the ap = 4,7,10,13,16.....n terms (with out formula)
#include<stdio.h>
int main(){
    int n,a=4;
    printf("Enter a number :");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
     a=a+3;
    printf("%d ",a);

   }
    return 0;
}   