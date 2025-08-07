# include<stdio.h>
void sortrows(int row,int columns,int arr[row][columns]);
int main(){
    // input form user size of 2D array
    int row;
    printf("Enter Rows No. :");
    scanf("%d",&row);
    int columns;
    printf("Enter No of columns :");
    scanf("%d",&columns);
  
  
  // input element 
   int arr[row][columns];
 for(int i=0;i<row;i++){
    for(int j=0;j<columns-1;j++){
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
   
   //call function
     sortrows( row, columns, arr);
   
   
    // print the aftar sorting
  printf("The is your 2D array after sorting rows : \n");
   for(int i=0;i<row;i++){
      for(int j=0;j<columns;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    }    
   
 
    return 0;
}

void sortrows(int row,int columns,int arr[row][columns]){
    for(int i=0;i<row;i++){
        for(int j=0;j<columns-1;j++){
            for(int k=j+1;k<columns;k++){
               if (arr[i][j]>arr[i][k]){
                 int temp=arr[i][j];
                 arr[i][j]=arr[i][k];
                 arr[i][k]=temp;
               }
            }
        }
    }
}