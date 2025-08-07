# include<stdio.h>
int main(){
     int n,pro=1;
     printf("Enter array size :");
     scanf("%d",&n);
     int arr[n];
     for (int i=0 ; i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
        pro=pro*arr[i];
     }
    printf("The product of array element : %d ",pro);
     
     return 0;
}