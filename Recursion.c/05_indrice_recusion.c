#include<stdio.h>
void fanA(int n);
void fanB(int n);

int main(){
    fanA(5);
    return 0;
}

void fanA(int n){
    if(n>0){
        printf("A : %d \n",n);
        fanB(n-1);
    }
}

void fanB(int n){
    if(n>0){
        printf("B : %d \n",n);
        fanA(n-1); 
    }
}