/*Print the AP - 100,97,94.. upto all terms which are positive
    formula = a+(n-1)d
     :a=100,d=-3
     a (to the power)  n= 100+(n-1)*(-3)  
                103-3n (for math)
                103 = 3n
                n= 103/3
                n=34.33 
                or n= 34  (for normal)             */
// math method = 1
#include<stdio.h>
int main(){
    int n=34;
    printf("the is your Ap use math :- :");
    
   for(int i =100;i>=103-3*n;i=i-3){
    printf("%d ",i);

   }
   //normal method = 2
   int ap=103;
   printf("\nthe is your Ap mormal  use normal:- :");
    
   for(int i =1;i<=n;i++){
    ap=ap-3;
    printf("%d ",ap);
   }

   //shortcut  method = 3
   int ap1=103;
   printf("\nthe is your Ap mormal  use short cut:- :");
    
   for(int i =1;ap1>1;i++){
    ap1=ap1-3;
    printf("%d ",ap1);
    
   }
 return 0;
}                   
