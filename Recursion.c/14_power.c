#include<stdio.h>
int   power(int a,int b);
int main(){
   int a;
   printf("Enter bass :");
   scanf("%d",&a);
   int b;
   printf("Enter power :");
   scanf("%d",&b);
  int  p=power(a,b);
  printf("%d  rais to the %d is : %d  ",a,b,p);
     return 0;
}



int power(int a ,int b){
    if(b==0)
     return 1;
   return a*power(a,b-1);  
}
    

   


