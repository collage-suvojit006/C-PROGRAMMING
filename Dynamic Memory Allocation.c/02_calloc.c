# include<stdio.h>
# include<stdlib.h>
int main(){
    int n;
    printf("Enter Nnumber of Element to be inserted : ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
     int *p=ptr;
    for(int i=0;i<n;i++){
        printf("Enter Element %d :",i+1);
        scanf("%d",&(*p));       //scanf("%d",&ptr[i]);
        p++;
    }
      p=ptr;
    printf("\n");
    for(int i=0;i<n;i++){
          printf("%d ",(*p)); //printf("%d ",ptr[i]);
       p++;    
    }
    //release the memory
    free(ptr);
    ptr=NULL;
    return 0;
}