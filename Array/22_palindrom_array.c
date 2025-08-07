# include<stdio.h>
int main(){
    int n=7; int count=0;
    int arr[]={1,2,3,4,3,2,1};
    for(int i=0,j=n-1;j>i;i++,j--){
         if(arr[i]!= arr[j]){
             printf("the is a not palindrom array ");
             break;
         }else{
            count++; 
         }  
    }
    if(count != 0) printf("The is palindrom array ");
    return 0;
}