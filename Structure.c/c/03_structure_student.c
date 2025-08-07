# include<stdio.h>
# include<string.h>
 typedef  struct student{ // crade a new data type 
    char name[50];
    int roll;
    char deparment[20];
    int yearofjoining;
    char cous[20];
   }student;
 int check(student banty,student sudip);

int main(){
    student banty,sudip;

    // Banty

    strcpy(banty.name,"Suvojit mondal");
    banty.roll=70;
     strcpy(banty.cous,"Polytechnic");
     strcpy(banty.deparment,"CST");
     banty.yearofjoining=2024;
   // sudip

   sudip=banty;
   strcpy(sudip.name,"Sudip Mondal");
   //strcpy(sudip.deparment,"CST");
   sudip.roll=69;

   if(check(banty,sudip)){
    printf("Both Student are in the same department ");
   }
   else{
    printf("The Student are in Defferent Department");
   }


    return 0;
}

 int check(student banty,student sudip){
    
    if( strcmp(banty.deparment,sudip.deparment)==0){
        return 1;
    }
    else{
        return 0;
    }
 }
