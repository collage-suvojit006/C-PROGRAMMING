# include<stdio.h>
# include<stdlib.h>
int main(){
    int n;
    printf("Enter a integar to allocate memory :");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int )); // allocatrd the memory 
   
  // chack the memory 
  if(ptr==NULL) {
     printf("Memory not allcoted ");
     exit(0);
   }
   for(int i=0;i<n;i++){
    printf("Enter element %d : ",i+1);  // input the element 
    scanf("%d",&ptr[i]);
   } 
   printf("\nThe element list is\n ");
   for(int i=0;i<n;i++){     // print the element 
    printf("%d ",ptr[i]);
   }
   int nw;
   printf("\nincress the element size (include the old size) :");  /// add new element without lost old data 
   scanf("%d",&nw);
   if(nw<n){
    printf("invalid entry incress the number n !!");
    exit(0);
   }
   ptr=(int *)realloc(ptr,nw*sizeof(int));  // the is a realloc function is incress the memory allcoation 
   if(ptr==NULL){
    printf("memory not abiale");
    exit(0);
   }
  for(int i=n;i<nw;i++){
    printf("Enter more element %d :",i+1);   // i start form n becuse the n elmeny alrady present in lest that whay i start forn n
    scanf("%d",&ptr[i]);
  }

  printf("\nprint the all element \n");
  for(int i=0;i<nw;i++){   // print the all new and old element 
    printf("%d ",ptr[i]);
  } 

  // relrase the memory in used in program
  free(ptr);
  ptr=NULL;
 return 0;
}