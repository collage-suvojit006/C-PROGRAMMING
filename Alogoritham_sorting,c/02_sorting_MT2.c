# include<stdio.h>
int main(){
    int arr[10]={1,3,2,4,2,7,6,5,9,9};  // the algoritham is more efinacens
     int brr[10]={0,0,0,0,0,0,0,0,0,0};  // the time complaxcity is O(n)
    for(int i=0;i<10;i++){
       if(brr[arr[i]]==0){
          brr[arr[i]]=1;
       }
       else{
        printf(" The dulicate Element :%d ",arr[i]);
        // break;

       }
    } 
    return 0;
}

//brr[arr[i]]=1;