# include<stdio.h>
int funre(int n);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    long fac = funre(n);
    printf("%d  Factorial is : %d",n,fac);
    return 0;
}
 int  funre(int n){
    if(n==1){   // Base case 
        return 1;
    }
    else{
        return n*fac(n-1);   
    }

}