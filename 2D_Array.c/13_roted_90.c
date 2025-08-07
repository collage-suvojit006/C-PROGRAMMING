# include<stdio.h>
int main(){
   // input form user size of 2D array
    int n;
    printf("Enter Rows/clomns No. :");
    scanf("%d",&n);
  
  
  // input element 
   int arr[n][n];
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("Enter element at [%d , %d]  :",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
 }
 // the is original array
 printf("The is your orininal 2D array : \n"); 
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    }    
 
 // swap to transpose
 for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
 }
   
   
 printf("The is your transpose array : \n"); 
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    } 

 // Rotate a matrix 90 degrees clockwise
    for(int i=0;i<n;i++){
       int j=0,k=n-1;
       while(k>j){
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=temp;
        j++;
        k--;
       }
       
    }
   printf("The is your transpose after 90 dig rocation   \n");
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    } 
    return 0;
}