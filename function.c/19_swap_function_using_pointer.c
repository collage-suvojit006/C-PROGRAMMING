#include<stdio.h>
int swap(int *x,int *y );
int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
  swap(&a,&b);
  printf("a is : %d ",a);
  printf("b is : %d ",b);
  return 0;
}

int swap(int *x, int *y){
   int  temp;
   temp= *x;
   *x=*y;
   *y=temp;
   return *x,*y;  

}