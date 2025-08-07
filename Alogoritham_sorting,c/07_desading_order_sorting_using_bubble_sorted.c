# include<stdio.h>
# include<stdbool.h>
int main(){
    int n;
    printf("Enter size of the Array :");
    scanf("%d",&n);

    int arr [n];
    for(int i=0;i<n;i++){
        printf("Enter a number :");
        scanf("%d",&arr[i]);
    }

    printf("The is your original array \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    // desading bubbal sort 
  for(int i=0;i<n-1;i++){
     bool flag=true;
     for(int j=0;j<n-1-i;j++){
          if(arr[j]<arr[j+1]){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             flag=false;
           }
       }
       if(flag) break;
   }

   printf("\nthe is your desading order array \n");
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   
    return 0;


}