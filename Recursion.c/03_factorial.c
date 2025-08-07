# include<stdio.h>
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        int rasult=n*fact(n-1);
        return rasult;
    }

}

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%d Factorial   is %d",n,fact(n));
    return 0;
}