#include<stdio.h>
void   reversearr(int arr[],int n);
void  printarr(int arr[],int n);
int main(){
    int n;
   printf("Enter size of array :");
   scanf("%d",&n);
   int arr[n];
   for(int i= 0; i<n;i++){
    printf("enter element %d:",i+1);
    scanf("%d",&arr[i]);
   }
   reversearr(arr,n);
   printarr(arr,n);
   return 0;
}   

void  reversearr(int arr[],int n){
  printf("The is the Reverse Array :-\n");
    for(int i=0; i<n/2;i++){
       int fristval=arr[i];
       int lastval=arr[n-i-1];
       arr[n-i-1]= fristval;
       arr[i]= lastval;
    }
    return;
}

void  printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d \t",arr[i]);
    }
    return;
}
