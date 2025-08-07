# include<stdio.h>
int main(){
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

    // print the wave printing
    printf("after wave printing \n");
    for(int j=0;j<columns;j++){
        if(j %2 ==0){
            for(int i=0;i<row;i++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                printf("%d ",arr[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}    