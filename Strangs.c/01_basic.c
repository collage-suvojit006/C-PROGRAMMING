# include<stdio.h>
int main(){
   char a[]={'H','E','L','L','O','\0'};
   int i=0;
   a[2]='l';
   while(a[i]!='\0'){
    printf("%c",a[i]);
    i++;
   }

  char str[1]=97;
  printf("%c",str[0]);
   


   
    return 0;
}