#include<stdio.h>
int factorial(int x);
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    int r;
    printf("Enter a R :");
    scanf("%d",&r);
    
    float  NcR_=factorial(n)/(factorial(r)*factorial(n-r));
    printf ("The NcR is : %f ",NcR_); 
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