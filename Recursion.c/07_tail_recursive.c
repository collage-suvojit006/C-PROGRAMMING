# include<stdio.h>
void fun(int n){
    if(n==0){
       // return;
    }
    else{
        printf("%d ",n);
         fun(n-1);// last thing done by the function so the is tail recursive function 
         //return;
    }


}
int main(){
    fun(3);
    return 0;
}