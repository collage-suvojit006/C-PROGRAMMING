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
   int i=0;
   int j=n-1;
   while(i<j){
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }
    return;
}

void  printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d \t",arr[i]);
    }
    return;
}
