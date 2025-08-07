//Print difference b/w odd indexed and even indexed elements

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

    int sumeven=0 ;
    int sumodd=0;

for(int i=0;i<n;i++){
    if(i %2 ==0){
        sumeven+=arr[i];
    }
    else{
        sumodd+=arr[i];
    }
}
printf("\nThe differenc between sum of even index and sum of odd index is : %d ",sumeven-sumodd);
    return 0;
}