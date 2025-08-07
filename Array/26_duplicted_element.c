# include<stdio.h>
int main(){
    int arr[7]={6,8,9,4,5,6,9};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("The duplicate element is: %d and thay index is %d\n",arr[i],i);
            }
        }
    }

    return 0;
}