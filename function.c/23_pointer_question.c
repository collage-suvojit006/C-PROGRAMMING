# include<stdio.h>
int main(){
    int a =5;
    int *p=&a;
   printf("The oringal value is :%d \n ",a);
   *p=10;
   printf("thr new value of A : %d ",a); 


    return 0;
}