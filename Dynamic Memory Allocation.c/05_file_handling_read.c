# include<stdio.h>
int main(){
   FILE* ptr=fopen("banty.txt","r"); // banty.txt is path and r is read mode 
    char str[100];
    while ((fgets(str,100,ptr)) != NULL)
    {
        printf("%s",str);
    }
    
    return 0;
}