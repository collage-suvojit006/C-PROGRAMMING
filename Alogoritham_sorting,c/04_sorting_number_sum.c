# include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};  // the programm time complaxcity is O(n)
    int i=0;
    int  j=9;
    int tergat=8;
    while(j>i){
        if(arr[i]+arr[j]==tergat){
            printf(" The targaye Element sum is : %d  + %d = %d ",arr[i],arr[j],tergat);
            break;
        }
        else if(arr[i]+arr[j]>tergat) {
            j--;
        }
        else{
            i++;
        } 
    }

    return 0;
}