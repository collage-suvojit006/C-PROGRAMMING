# include<stdio.h>
int main(){
    int arr[5]={4,5,9,8,7};
    int brr[5];
    for(int i=0;i<5;i++){
        brr[i]=arr[4-i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}