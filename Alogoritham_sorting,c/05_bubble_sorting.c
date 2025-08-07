# include<stdio.h>
int main(){
    int n;
    printf("Enter Array size :");
    scanf("%d",&n);

   int arr[n];
   for(int i=0;i<n;i++){
    printf("Enter Element %d :",i+1);
     scanf("%d",&arr[i]);
   }  

   printf("Original Array is :-\n") ;
   for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
   }
   
   // Bubble Sorting 
   for(int i=0;i<n-1;i++){   // i -> number of pass 
      for(int j=0;j<n-1-i;j++){   // j-> number of swap
        if (arr[j]>arr[j+1]){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }
       }
    }
 printf("\nThe is the Bubble sorting array \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}