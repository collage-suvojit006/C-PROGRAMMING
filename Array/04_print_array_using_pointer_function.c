#include<stdio.h>
void printarr(int *arr,int n);
int main(){
   int n;
   printf("Enter size of array :");
   scanf("%d", &n);
   int arr[n];
   for(int i=0 ;i<n;i++){
      printf(" Enter  element %d :",i+1);
      scanf("%d",&arr[i]);
   }
     printarr(arr,n);
    return 0;
}
 void printarr(int *arr,int n){
   printf("The Element is : ");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }

 }