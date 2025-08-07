# include<stdio.h>
# include<string.h>
int main(){
//    char str[20]="Hello World";
//    int index=3;
//    char val='L';
//    for(int i=index+1;i<='\0';i++ ){
//      str[i+1]=str[i];
//    }
//    str[index]=val;
//    printf("%s",str);

 char str[20]="Banty";
 printf("%s",str);
 // 2 index ta N add koro
  for (int i=5;i>=2;i--){
      str[i+1]=str[i];
   }
 str[2]='N';
 printf("\n %s",str);
    return 0;
}