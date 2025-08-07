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
     
     // find maximun element 
     int count_row=0;
     int count_colume=0;
   int max=arr[0][0];
   for(int i=0;i<row;i++){
      for(int j=0;j<columns;j++){
         if(max<arr[i][j]){
             max=arr[i][j];
             count_row=i+1;
             count_colume=j+1;
         } 
       }
   } 
   printf("The Maximum Element in the array is : %d  and is index is [%d,%d]",max,count_row,count_colume);
    return 0;
}