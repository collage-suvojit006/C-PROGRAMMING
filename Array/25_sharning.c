# include<stdio.h>
# include<stdbool.h>
int main(){
   //define array size 
   int n;
   printf("Enter array size :");
   scanf("%d",&n);
 // input element form user 
 int arr[n];
   for(int i=0;i<n;i++){
    printf("Enter element %d : ",i+1);
    scanf("%d",&arr[i]);
   }
  // print the all element  
 printf("The is original array :-\n");
 for(int i=0;i<n;i++){
    printf(" %d ",arr[i]);
 }
 //enter element 
 int x;
 bool chack = false;
 int index= -1;
 printf("\nEnter aya element whhich can store the array chack : ");
 scanf("%d",&x);

 //chack the element present in array
 for(int i=0;i<n;i++){
    if(arr[i]==x){
        chack=true;
        index=i;
        break;
    }
 }
 if(chack){
    printf("The element present in the array the index %d and the element is %d ",index,x);
 } 
 else{
    printf("\nThe element not present in the array !!");
 }

    return 0;
}