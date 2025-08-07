# include <stdio.h>
int main(){
   int arr[10]={1,3,8,4,2,7,6,5,9,9};  //the time complaxcity is O(n)
   int sum_arr=0;
   for(int i=0;i<10;i++){
    sum_arr+=arr[i];
   };
   int n=9;
   int sum_of_n=(n*(n+1))/2;
 
  printf("The Dulipit Digites : %d ",sum_arr - sum_of_n);

   
    return 0;
}