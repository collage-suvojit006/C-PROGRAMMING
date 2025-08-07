# include<stdio.h>
int fib(int n);
int main(){
    int n=2;
   printf(" fin of %d  is : %d ",n, fib(n));
    return 0;
}

int fib(int n){
    if (n==0 || n==1){
        if(n==0) return 0;
        if(n==1) return 1;
    }
    else{
        int fib1=fib(n-1);
        int fin2= fib(n-2);
        int fibn = fib1+fin2;
      //  printf("fib of %d is : %d \n",n,fibn);  print all function call 
        return fibn;
    }
}