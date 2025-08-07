# include<stdio.h>
void swap(int *a,int*b){
    int temp= *a;
   *a=*b;
    *b=temp;
}
int partition(int arr[],int lower,int upper);
void quick_sort(int arr[],int lower,int upper){
    if(lower=>upper){
        return;
    }
    int location=partition(arr,lower,upper);
    quick_sort(arr,lower,location-1);
    quick_sort(arr,location+1,upper);
}

int partition(int arr[],int lower,int upper){
    int pivot=arr[lower];
    int i=lower+1, j=upper;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[lower],&arr[j]);
    return j;
}
int main(){
    int arr[]={7,8,2,6,4,99,25,13,5,1,51};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("The Original Array is :\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    quick_sort(arr,0,n-1);

    printf("\n The Sorted Array is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}