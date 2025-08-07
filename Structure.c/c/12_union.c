# include<stdio.h>
# include<string.h>
union student{
    int roll;
    int id;
    float gpa;
    char name[10];
   
};
/* union is user difine data type as like structure bou it represent defferent role play then struct
 becuause it doe'nt take extra memory space lick scructre*/

int main(){
    union student banty;
    printf("The Size of Union : %d ",sizeof(banty)); // sizeof is inbult function of c libary is used to measurement size any fonction
   
   banty.roll=70;
   banty.id=100;
   banty.gpa=9.4;
   strcpy(banty.name,"Banty");
 


   printf("%d\n",banty.roll); // error 
   printf("%d\n",banty.id);  // error
   printf("%f\n",banty.gpa); // error
   printf("%s\n",banty.name); // print only banty because union store only one member at a time banty is a last member that whay print banty

   
   
    return 0;
}
