# include<stdio.h>
int main(){
   int arr[3][3];
   arr[0][0]=1;
   arr[0][1]=2;
   arr[0][2]=3;
   arr[1][0]=4;
   arr[1][1]=5;
   arr[1][2]=6;
   arr[2][0]=7;
   arr[2][1]=8;
   arr[2][2]=9;

// 1  2  3 
//  4  5  6 
//  7  8  9 
// print the array 
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf(" %d ",arr[i][j]);
    }
    printf("\n");
  }
   
   
   
   

   
   

    return 0;
}