# include<stdio.h>
void Sortingcolumns(int row,int columns,int arr[row][columns]);
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
     
   
    //call function
     Sortingcolumns( row, columns, arr);

    // print the aftar sorting
  printf("The is your 2D array after sorting Columns  : \n");
   for(int i=0;i<row;i++){
      for(int j=0;j<columns;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    }    
   
 
    return 0;
}

void Sortingcolumns(int row,int columns,int arr[row][columns]){
    for(int j=0;j<columns;j++){
        for(int i=0;i<row-1;i++){
            for(int k=i+1;k<row;k++){
               if (arr[i][j]>arr[k][j]){
                 int temp=arr[i][j];
                 arr[i][j]=arr[k][j];
                 arr[k][j]=temp;
                
               }
               
            }
           
        }
       
    }
}