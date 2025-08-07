# include<stdio.h>
int main(){
   int arr[]={7,8,9,3,4};
   for(int i= 1;i<5;i++){
    if(i % 2!=0){
        arr[i]*=2;
        printf("the odd number index is %d and the are value after 2 multiplair is : %d \n",i,arr[i]);
    }
    else{
        arr[i]+=10;
         printf("the  evev number index is %d and the are value after 10 increment  is : %d \n",i,arr[i]);
    }
   }
    return 0;

}