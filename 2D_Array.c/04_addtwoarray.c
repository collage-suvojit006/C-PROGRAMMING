# include<stdio.h>
int main(){
   


int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        a[i][j]=a[i][j]+b[i][j];
    }
}


// print the 2d array 
printf("The is your sum of 2 array array :- \n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf(" %d ",a[i][j]);
     } 
     printf("\n");
}
    return 0;
}