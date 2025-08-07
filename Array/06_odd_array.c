#include<stdio.h>
int  oddarray(int arr[],int n);
int main(){
   int n;
   printf("Enter size of array :");
   scanf("%d", &n);
   int arr[n];
   for(int i=0 ;i<n;i++){
      printf(" Enter  element %d :",i+1);
      scanf("%d",&arr[i]);
   }
     printf("total odd number in array is :%d ",oddarray(arr,n));
    return 0;
}
 int  oddarray(int arr[],int n){
   int count=0;
    
    for(int i=0;i<n;i++){
       if(arr[i] % 2 !=0)
       count++;

    }
    return count ;
 }