# include<stdio.h>
int main(){
    char str [10];
    int i=0;
    printf("Enter a Characeat :");
    while(1){
        str[i]=getchar();
        if(str[i]=='\n'){
            break;
        }
        i++;
    }
    for(int i=0;i<='\0';i++){
        printf("%c",str[i]);
    }
    return 0;
}