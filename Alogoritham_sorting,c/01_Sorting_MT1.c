# include<stdio.h>
int main(){
   int n=10;     // the time complaxcty is O(n^2);
   int arr [10]={1,7,5,8,3,2,6,9,4,9};
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j]){
             printf("%d ",arr[i]);
             break;
           }
       } 
   }
    return 0;

}