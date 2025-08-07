# include<stdio.h>
int main(){
    int n;
     printf("Enter array size :");
     scanf("%d",&n);
     int arr[n];
     for (int i=0 ; i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
     }
     printf("The  all element in the array is :-\n ");
      for (int i=0 ; i<n;i++){
        printf("%d  ",arr[i]);
     }

     int min=arr[0];
     for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
     }
     printf("\nThe Minimum Element in the array is : %d ",min);
    
    return 0;
}