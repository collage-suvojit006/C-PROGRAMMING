# include<stdio.h>
int main(){
     int n,sum=0;
     printf("Enter array size :");
     scanf("%d",&n);
     int arr[n];
     for (int i=0 ; i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
     }
    printf("The sum of array element : %d ",sum);
     
     return 0;
}