# include<stdio.h>
int main(){
   // input form user size of 2D array 1
    int m;
    printf("Enter first array Rows No. :");
    scanf("%d",&m);
    int n;
    printf("Enter first array colums No. :");
    scanf("%d",&n);
   int arr[m][n];
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         printf("Enter element at [%d,%d] :",i+1,j+1);
         scanf("%d",&arr[i][j]);
       }
    }
  // input form user size of 2D array 2
   printf("\n");
   int p;
    printf("Enter scond array Rows No. :");
    scanf("%d",&p);
    int q;
    printf("Enter sceond array colums No. :");
    scanf("%d",&q);
   int arr2[p][q];
   for(int i=0;i<p;i++){
       for(int j=0;j<q;j++){
         printf("Enter element at [%d,%d] :",i+1,j+1);
         scanf("%d",&arr2[i][j]);
       }
    }
  

  if(n!=p){
    printf("Error: Columns of first array must match rows of second array for multiplication.\n");
        return 1;
  }
  // print first array 
  printf("The is your Frist Array \n");
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          printf("  %d  ",arr[i][j]);
       }
     printf("\n");
   }
   printf("\n");
  // print scond array array 
  printf("The is your Scaend  Array\n ");
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
          printf("  %d  ",arr2[i][j]);
       }
     printf("\n");
   }

  // result array is  and calculet this 
  int result[m][q];
  for(int i=0;i<m;i++){
     for(int j=0;j<q;j++){
         result[i][j]=0;
         for(int k=0;k<n;k++){
             result[i][j]+=arr[i][k]*arr2[k][j];
           }
       }
   }

// print the result 
printf("The is your Result \n");
 for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
          printf("  %d  ",result[i][j]);
       }
   }
  
    return 0;
}