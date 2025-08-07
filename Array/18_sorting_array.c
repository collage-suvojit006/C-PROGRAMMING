# include<stdio.h>
void ascending_array(int arr[],int n);
void descending_array(int arr[],int n); 
void printarr(int arr[],int n);
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
 printf("\n");
 //choice for user array print ascending order or  decending order
 int choice;
 printf("Enter 1 for ascending order sorting.\n Enter 2 for decending order sorting.\n");
 printf("Enter your choice :");
 scanf("%d",&choice);
 if(choice==1){
    ascending_array(arr,n);
    printarr(arr,n);
 }
 else if (choice==2){
    descending_array(arr,n);
    printarr(arr,n);
 }
 else{
    printf("Invalid choice please chack your Entry !! ");
 }

   
    return 0; 
}
// sorting array in Ascending order function
void ascending_array(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
    return;
}
// sorting array in Descending order function
void descending_array(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return;
}

// print the new asceding array
void printarr(int arr[],int n){
  printf("\n The is the sorting ascending order array :-\n ");
    for(int i=0;i<n;i++){
        printf("  %d  ",arr[i]);
    }
    return; 
}