# include<stdio.h>
int main(){
    int python;
    printf("Enter Your Python Marks : ");
    scanf("%d",&python);
    int c;
    printf("Eter a c progamming lanhuage Marks :");
    scanf("%d",&c);
    int ds;
    printf("Enter Data structure Marks :");
    scanf("%d",&ds);
    int algorithms;
    printf("Enter The Algorithms Marks :");
    scanf("%d",&algorithms);
     int cso;
     printf("Enter Computer system origanication Marks :");
     scanf("%d",&cso);

     float percentage=((python+c+ds+algorithms+cso)/500.0)*100;
   char grade;
  if(percentage>=90){
     grade='A';

    }
   else if(percentage>=80 && percentage<90){
      grade='B';
   }
   else if(percentage>=70 && percentage<80){
    grade='C';
   }
   else if (percentage>=60 && percentage<70){
    grade='D';
   }
   else if(percentage>=40 && percentage<60){
     grade='E';
   }
   else{
      grade='F';
   }
   printf("percentage : %d \n",percentage);
   printf("Your Grade : %c ",grade);

    return 0;
}