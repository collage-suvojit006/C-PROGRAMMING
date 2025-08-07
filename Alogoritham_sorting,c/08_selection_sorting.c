# include<stdio.h>
# include<limits.h>
int main(){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
   printf("The Unsorted Array\n");
    for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
    }

  // selection sorting algoritham
  for(int i=0;i<n-1;i++){
     int min=INT_MAX;
     int index=-1;
     // find the minimum element in the us sorted part of array
     for(int j=i;j<n;j++){
         if(min>arr[j]){
             min=arr[j];
             index=j;
           }
       }
       // swap mimimum number to frist index of array
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
   }

 printf("\nthe sorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}