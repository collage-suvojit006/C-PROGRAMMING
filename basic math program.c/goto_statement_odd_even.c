# include<stdio.h>
# include<stdlib.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
    printf(" %d is Even Number ",n);
     exit(0);
    odd:
    printf("%d is Odd Number ",n);  
    return 0;
}