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
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<columns;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=columns-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }  
    return 0;
}    