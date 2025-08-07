# include<stdio.h>
void printn(int n){
  if (n>0){
     printn(n-1);
  printf(" %d ",n);
  
}
}
 int main(){
    int n;
   printf("Enter a number :");
   scanf("%d",&n);
   printn(n);
    return 0;
} 
