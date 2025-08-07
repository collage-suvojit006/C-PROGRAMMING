# include<stdio.h>
int main(){
   
//    int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
//    };

//in put form user 
int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("Enter element in  %d , %d  :",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}


// print the 2d array 
printf("The is your 2D array :- \n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf(" %d ",arr[i][j]);
     } 
     printf("\n");
}
    return 0;
}