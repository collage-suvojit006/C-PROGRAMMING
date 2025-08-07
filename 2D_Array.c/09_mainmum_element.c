# include<stdio.h>
int main(){
  // input form user size of 2D array
    int row;
    printf("Enter Rows No. :");
    scanf("%d",&row);
    int columns;
    printf("Enter Rows No. :");
    scanf("%d",&columns);
  
  
  // input element 
   int arr[row][columns];
 for(int i=0;i<row;i++){
    for(int j=0;j<columns;j++){
        printf("Enter element in %d , %d  :",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
 }
   
   // the is original array
 printf("The is your orininal 2D array : \n"); 
    for(int i=0;i<row;i++){
      for(int j=0;j<columns;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    }    
     
     
     // find minimun element and index
   int count_row,count_colume;
   int min=arr[0][0];
   for(int i=0;i<row;i++){
      for(int j=0;j<columns;j++){
         if(min>arr[i][j]){
             min=arr[i][j];
             count_row=i+1;
             count_colume=j+1;
         } 
       }
   } 
   printf("The Minimum Element in the array is : %d  and index is [%d,%d]",min,count_row,count_colume);
    return 0;
}