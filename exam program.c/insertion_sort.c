# include<stdio.h>
int main(){
   int  arr[5]={3,2,5,1,6};
   for(int i=0;i<5;i++){
      int j=i;
      while(j>0 && arr[j-1]>arr[j]){
         int temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
          j--;
      }
   } 

   for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
   } 
    return 0;
}