# include<stdio.h>
void dec(int n);
void inc(int n);

int main(){
   int n=4;
    dec(n);
     inc(n);
    return 0;
}

void dec(int n){
    if (n==0){
        return ;
    }
    else{
        printf("%d \n",n);
        dec(n-1);
    }
}
void inc(int n){
    if(n>0){
        inc(n-1);
        printf("%d\n",n);
    }
}