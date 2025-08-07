# include<stdio.h>
int main(){
    for(int i=1;i<10;i++){
        for(int j=1;j<i;j++){
            printf("%d ",j); 
           //  if(j==6) break;  // break only j loop
              if(j==6) goto end; // break i and j loop 
        }
        printf("\n");
    }
    end:
    return 0;
}