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
     int x;
     printf(" \n enter any number : ");
     scanf("%d",&x);
     printf("The is the all element Greater then  %d  is :-\n",x);
     for(int i=0; i<n;i++ ){
        if(x<arr[i]){
            printf("%d ",arr[i]);
        }
     }
    return 0;
}