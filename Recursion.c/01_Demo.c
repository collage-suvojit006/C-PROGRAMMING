# include<stdio.h>

int fun(int n){
 if (n==1)
      return 1; // back to the call function
  else
     return 1+ fun(n-1);    
}

int main(){
    int n=3;
    printf("%d",fun(n)); 
    
    return 0;
}