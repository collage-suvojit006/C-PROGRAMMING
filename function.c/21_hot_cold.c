#include<stdio.h>
void  hot_cold(int n);
int main(){
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   hot_cold(n);
  
    return 0;
}

void  hot_cold(int n){
    if (n<=20) printf("COLD ");
    else if (n<=36 && n>20) printf("NORMAL");
    else printf("HOT");
  return ;
}