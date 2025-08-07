# include<stdio.h>
int main(){
   int arr[10];
   int index,val;
   for(int i=0;i<9;i++){
    printf("Enter element %d :",i+1);
     scanf("%d",&arr[i]);
   }

   printf("Enter index to be insert a element :");
   scanf("%d",&index);
   printf("tener Value :");
   scanf("%d",&val);

   for(int i=8;i>index;i--){
    arr[i+1]=arr[i];
   }
   arr[index-1]=val;
   printf("The is the updated array :-\n");
   
   for(int i=0;i<10;i++){
    printf("%d \t",arr[i]);
   }

    return 0;
}