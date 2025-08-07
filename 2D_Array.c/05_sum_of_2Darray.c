# include<stdio.h>
int main(){
   int row;
   printf("Enter ROWS :");
   scanf("%d",&row);
   int columns;
   printf("Enter Colums :");
   scanf("%d",&columns);

//in put form user 
int arr[row][columns];
for(int i=0;i<row;i++){
    for(int j=0;j<columns;j++){
        printf("Enter element in  %d , %d  :",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
int sum=0;
printf("The is your 2D array :- \n");
for(int i=0;i<row;i++){
    for(int j=0;j<columns;j++){
        printf(" %d ",arr[i][j]);
        sum=sum+arr[i][j];
     } 
     printf("\n");
}

printf("The total sum of the  array is : %d ",sum);
    return 0;
}