/*
print this pattern (number given by user )
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        // strading number 
        if (i%2 !=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
           // swap the number
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");

    }
    printf("\n\n");
   // use math
   printf("use math\n");
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}