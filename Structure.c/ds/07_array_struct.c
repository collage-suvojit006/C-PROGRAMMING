# include <stdio.h>
typedef struct array{
    int a;
    char b;
}array;
void print(array arr[]){
    for(int i=0;i<3;i++){
        printf("%d %c\n",arr[i].a,arr[i].b);
    }
}
int main(){
    array arr[3]={{1,'A'},{2,'B'},{3,'C'}};
    print(arr);
    return 0;
}