# include<stdio.h>
int main(){
   char arr[]="My name is banty and i am stady  c programming language ";
//    for(int i=0;arr[i]<'\0';i++){
//       printf("%c",arr[i]);

  
 int i=0;
 while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
    return 0;
}