#include<stdio.h>
int factorial(int x);
int ncr(int n,int r);
int main(){
   int n;
   printf("Enter number of Row :");
   scanf("%d",&n);
  
   for(int i = 0 ;i<=n;i++){
     for(int k=0; k<n-i-1;k++){
        printf(" ");
     }
      for(int j=0; j<=i;j++){
       int iCj=ncr(i,j);
        printf(" %d ",iCj);
       } 
     printf("\n");
   } 
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
