#include<stdio.h>
int factorial(int x);
int npr(int n,int r);
int main(){
   int  gg=npr(8,3);
   printf("%d",gg);
    return 0;

}
// Create. a factorial function 
int factorial(int x){
    int  fac=1;
    for (int i=1; i<=x;i++){
        fac=fac*i;
    }    
     return fac; 
}      

//   create a ncr function 
   int npr (int n, int r){
   int NpR=factorial(n)/factorial(n-r);
    return NpR; 
   }   