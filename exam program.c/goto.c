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
         printf("The Number is Even ");
          exit(0);

    odd:
        printf("The NUmber is odd ");     
  
    return 0;
}