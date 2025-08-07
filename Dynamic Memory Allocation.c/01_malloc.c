# include<stdio.h>
# include<stdlib.h>
int main(){
    int n;
    printf("Enter Number of Element to be store :");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int)); // Dynamically allocate memory using malloc 
    //store the values in the alocted memory
   int *p=ptr;  // sore the first address of pointer 
    for(int i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&(*p));// or  scanf("%d",&ptr[i])
        p++;
    } 
    // display the values 
    p=ptr;
    printf("The Elements is :-");
    for(int i=0;i<n;i++){
        printf("%d ",(*p));  //  or printf("%d",ptr[i]);
        p++;
    }
    //rlirase the memory 
    free(ptr);
    ptr=NULL;
    return 0;
}