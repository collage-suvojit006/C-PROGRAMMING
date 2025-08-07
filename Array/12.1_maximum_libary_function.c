# include<stdio.h>
# include<limits.h>
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

     int max=INT_MIN;
     for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
     }
     printf("\nThe Maximum Element in the array is : %d ",max);
    
    return 0;
}