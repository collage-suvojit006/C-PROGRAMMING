#include<stdio.h>
int main(){
    // int arr[3]={78,54,25};  // declered a array 
    // arr[2]=90;  // indexing of array
    // printf("%d",arr[0]);
 float arr2[3]={};

 printf("Ener 1 value :");
 scanf("%f",&arr2[0]);
 printf("Ener 2 value :");
 scanf("%f",&arr2[1]);
printf("Ener 3 value :");
 scanf("%f",&arr2[2]);


 printf("The 1st product with GST : %f \n",arr2[0]+(arr2[0]*0.18));
 printf("The 2 nt  product with GST : %f \n",arr2[1]+(arr2[1]*0.18));

printf("The 3 nt product with GST : %f \n",arr2[2]+(arr2[2]*0.18));



return 0;
}