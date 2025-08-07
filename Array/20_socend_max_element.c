# include<stdio.h>
# include<limits.h>
int main(){
   int arr[5]={7,7,3,7,6};
   int max=INT_MIN;
   int smax=INT_MIN;
for(int i=0;i<5;i++){
    if(max<arr[i]){
        smax=max;
        max=arr[i];
    }
    else if(smax<arr[i] && max != arr[i]){
        smax=arr[i];
    }
}
printf("The socend max is : %d ",smax);
return 0;
}
