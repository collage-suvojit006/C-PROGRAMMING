# include<stdio.h>
int main(){
    int arr[7]={4,2,7,6,8,3,5};
  int x=12,count=0;
  for(int i=0 ;i<7;i++){
    for(int j=i+1;j<7;j++){
        if(arr[i]+arr[j]==x){
            printf("(%d , %d )",arr[i],arr[j]);
            count++;

        }
    }
  }
 printf("\nThe total number pair is : %d ",count ); 
    return 0;
}
