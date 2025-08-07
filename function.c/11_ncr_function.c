#include<stdio.h>
int factorial(int x);
int ncr(int n,int r);
int main(){
   int  gg=ncr(8,3);
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
   int ncr (int n, int r){
   int NcR=factorial(n)/(factorial(r)*factorial(n-r));
    return NcR; 
   }   
// int ncr(int n, int r) {
//     int nCr = factorial(n) / (factorial(r) * factorial(n - r));
//     return nCr;
// }

    
