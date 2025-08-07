# include<stdio.h>
int stari(int n);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The path of no : %d ",stari(n));
    return 0;
}

int stari(int n){
    if (n<=3) return n;

    return stari(n-3)+stari(n-2)+stari(n-1);
}