# include<stdio.h>
void reverse(int arr[],int a, int b);
int main(){
     int n=7;
     int roted;
     printf("Enter rotation : ");
     scanf("%d",&roted);
    int arr[7]={1,2,3,4,5,6,7};
    roted=roted %n;
    reverse(arr,0,n-1);
    reverse(arr,0,roted-1);
    reverse(arr,roted,n-1);

for(int i=0;i<n;i++){
    printf(" %d " ,arr[i]);
}
    
    return 0;
}

void reverse(int arr[],int a, int b){
    for(int i=a,j=b;j>i;j--,i++){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}