#include<stdio.h>
int main(){
   int number[5];
   int *pointer=&number[0];
   for (int i=0; i<5;i++){
    printf("index %d  : ",i);
    scanf("%d ",(pointer+i));
   } 

  
  printf("output \n");
   for( int j=0 ;j<5;j++){
    printf("%d index = %d \n",j,*(pointer+j));
   }

return 0;
}