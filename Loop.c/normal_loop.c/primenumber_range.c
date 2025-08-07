#include<stdio.h>
int main(){
    int lower,upper,a=0,i,j;
    printf("Enter lower limit :");
    scanf("%d",&lower);
    printf("Enter upeer limit :");
    scanf("%d",&upper);
    for(i=lower;i<=upper;i++){
        for( j=2;j<=i;j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a==0)
        printf("%d\n",i);
    }
    
 return 0;
}