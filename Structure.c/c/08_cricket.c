# include<stdio.h>
# include<string.h>
int main(){
    typedef struct cricketname{
        int age;
        char first_name[20];
        char last_name[20];
        int noOfmach;
        float average; 
    }cricket;
      
      cricket arr[4];
   
   // enter data form user 
    for(int i=0;i<4;i++){
        printf("Enter First Name :");
        scanf("%s",arr[i].first_name);
       
        printf("Enter last Name :");
        scanf("%s",arr[i].last_name);
        
        printf("Enter age :");
        scanf("%d",&arr[i].age);
        
        printf("Enter NO Of Mach :");
        scanf("%d",&arr[i].noOfmach);
        
        printf("Enter Average :");
        scanf("%f",&arr[i].average);
        
        printf("\n");
    } 
  // print the data 
  for(int i=0;i<4;i++){
      printf("\n----player %d ----\n",i+1);
      printf("Name : %s %s\n",arr[i].first_name,arr[i].last_name);
      printf("Age : %d\n",arr[i].age);
      printf("No of Mach : %d\n",arr[i].noOfmach);
      printf("Average : %f\n",arr[i].average);
    }


    return 0;
}