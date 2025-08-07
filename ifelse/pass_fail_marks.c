#include<stdio.h>
int main(){
    int marks;
    printf("Enter a number a you marks (0-100):");
    scanf("%d",&marks);
    if(marks>=0 && marks<30){
        printf("fall");
    }
   else if (marks>30 && marks<=100){
    printf("pass");
  }
  else{
    printf("Worng masrks");
  }
  return 0;
}