# include<stdio.h>
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n=9;
    int arr[9]={5,4,6,2,8,9,1,3,7};
    for(int gap=n/2;gap>0;gap=gap/2){
        for(int i=gap;i<n;i++){
            for(int j=i-gap;j>=0;j=j-gap){
                if(arr[j]>arr[j+gap]){
                    swap(&arr[j],&arr[j+gap]);
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
