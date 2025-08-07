# include<stdio.h>
void zig(int n){
   if(n==0) return; 
   printf("%d ",n);
    zig(n-1);
    printf("%d ",n);
    zig (n-1);
     printf("%d ",n);
}
int main(){
  int n;
   printf("Enter a number :");
   scanf("%d",&n);
    zig(n);
    return 0;
}