# include<stdio.h>
void sortingarray(int row,int columns ,int arr[row][columns]);
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
        printf("Enter element at [%d , %d]  :",i+1,j+1);
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
    // function call 
    sortingarray(row,columns,arr);
 
 //print the 2d array after sorting 
 printf("The is our 2D array after soting :- \n");
  for(int i=0;i<row;i++){
      for(int j=0;j<columns;j++){
         printf(" %d ",arr[i][j]);
       }
       printf("\n");
    }  

    return 0;
}

void sortingarray(int row,int columns ,int arr[row][columns]){
   // copy 2d array in to 1d array
   int total_element=row*columns;
   int arr1d[total_element];
   for(int i=0;i<row;i++){
    for(int j=0;j<columns;j++){
        arr1d[i*columns+j]=arr[i][j];
    }
   }

   // sorting the array
   for(int i=0;i<total_element;i++){
    for(int j=i+1;j<total_element;j++ ){
         if(arr1d[i]>arr1d[j]){
             int temp=arr1d[i];
             arr1d[i]=arr1d[j];
             arr1d[j]=temp;
           }
        }
    }

    // store back in to 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<columns;j++){
            arr[i][j]=arr1d[i*columns+j];
        }
    }
 return;
}

