# include<stdio.h>
# define size 3
int main(){
    int matix[size][size];
printf("Enter 3 x 3  Matrix Element :-\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&matix[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((i==j && matix[i][j] !=1) ||( i!=j && matix[i][j] != 0)){
                 flag=0;
                 break;
            }
        }
        if(flag==0) break;
    }

    if(flag==1){
        printf("The given matrix is an identity matrix\n");
    }
    else{
        printf("The given matrix is not  an identity matrix\n");
    }


    return 0;
}