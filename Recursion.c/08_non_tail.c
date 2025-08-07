#include<stdio.h>
void fun(int n){
    if(n==0)
    return;
    fun(n-1); //last thing  not done by the function so the is tail recursive function 
    printf(" %d ",n);
} 
int main(){
    fun(3);
    return 0;
}