# include<stdio.h>
# include<stdbool.h>
int main(){
    int n; // input array size
    printf("Enter array size :");
    scanf("%d",&n);
  /// input element form user
    int arr[n];
   for(int i=0;i<n;i++){
    printf("Enter Element %d :",i+1);
     scanf("%d",&arr[i]);
   }  
   // print the Originam Array
   printf("Original Array is :-\n") ;
   for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
   }

   // bubble sorting
   for(int i=0;i<n-1;i++){
     bool flag=true;
     for(int j=0;j<n-1-i;j++){
         if(arr[j]>arr[j+1]){
             int temp= arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             flag=false;
           }
       }
       if(flag){
         break;
       } 
   }
 // print the sorting array
  printf("\nThe Sorted Array is \n");
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }


    
    return 0;

}