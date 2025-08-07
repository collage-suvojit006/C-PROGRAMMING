#include<stdio.h>
# include<string.h>
int main(){
    char str[50];
    puts("Enter a string");
    scanf("%[^\n]s",str);
    // size of string
    int k=0,size=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The revers strings is ");
    puts(str);
    
    return 0;

}