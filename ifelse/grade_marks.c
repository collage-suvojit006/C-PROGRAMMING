#include<stdio.h>
int main(){
    // pass or fail
     int marks;
    printf("Enter a number a you marks (0-100):");
    scanf("%d",&marks);
    if(marks>=0 && marks<30){
        printf("fall");
    }
   else if (marks>=30 && marks<=100){
    printf("pass\n");
  }
  else{
    printf("Worng masrks!! \n Enter Marks under 100 ");
  }



  // grade 
 if(marks<100){ 
   if (marks<=100 && marks >90){
    printf("your grade = A+");
   }
   else if (marks>=70 && marks< 90){
    printf("your grade= A");
   }
   else if (marks>=30 && marks <70){
    printf("you grade = B");
   }
   else if (marks < 30 ){
    printf("your grade = C");
   }
   else {
     printf("your grade = D"); 
   }
 }
    return 0;
}