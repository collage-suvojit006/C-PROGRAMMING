# include<stdio.h>
int main(){
    // input array size form user 
    int n;
    printf("Ener array Size :");
    scanf("%d",&n);
   
   // input element form user 
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
  // print the original array 
    printf("\n The original array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
   // sorting using insertion sorting alogritams
    for(int i=1;i<n;i++){
        int j=i;
        while(arr[j-1]>arr[j] && j>0){
             int temp=arr[j-1];
             arr[j-1]=arr[j];
             arr[j]=temp;
             j--;
           }
    }
    
   // print the sorted array
    printf("\nThe is the sorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}