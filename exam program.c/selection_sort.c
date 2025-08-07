# include<stdio.h>
int main(){
    int arr[]={64,25,12,22,11};
 int n=5;
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
             if(arr[j]<arr[min_index]){
                min_index=j;
             }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}