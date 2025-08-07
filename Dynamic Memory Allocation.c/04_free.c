#include<stdio.h>
#include<stdlib.h>
int *input(){
    int *ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&ptr[i]);
    }   
    return ptr;
    
}
int main(){
  int sum=0;
  int *ptr=input();
  for(int i=0;i<5;i++){
    sum+=*(ptr+i);
  }
  printf("Sum  :%d",sum);
  free(ptr); // releasing the memory at the end 
  ptr=NULL;  // pointer set to Null
    return 0;
}