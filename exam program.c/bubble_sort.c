# include<stdio.h>
int main(){
    int arr[]={5,4,6,2};
    for(int i=0;i<4;i++){
        int flag=1;
        for(int j=0;j<4-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag) break;
    }

    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}