#include<stdio.h>
int   powerlog(int a,int b);
int main(){
   int a;
   printf("Enter bass :");
   scanf("%d",&a);
   int b;
   printf("Enter power :");
   scanf("%d",&b);
  int  p=powerlog(a,b);
  printf("%d  rais to the %d is : %d  ",a,b,p);
     return 0;
}



int powerlog(int a ,int b){
    if(b==0)
     return 1;
     int x= powerlog(a,b/2);
   if(b%2==0)
   return x*x;
   else
    return x*x*a;
}
    

   


