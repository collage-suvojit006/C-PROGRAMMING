# include<stdio.h>
int main(){
    int row;
    printf("Enter student number :");
    scanf("%d",&row);
    int colum;
    printf("Enter total subject No :");
    scanf("%d",&colum);
    
    int arr[row][colum];
    printf("\n Subject No 1 is physics \n Subject no 2 is Matn \n Subject No 3 is chemisty \n");
    for (int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
           printf("student Roll No %d and Subject NO is %d  :",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

