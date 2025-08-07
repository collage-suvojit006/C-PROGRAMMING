# include<stdio.h>
struct chart_set{
    char s;
    int i;
};
void key_value(char *s,int *i){
    scanf("%c %d",s,i);
}
int main(){
   struct chart_set A;
   key_value(&A.s,&A.i);
   printf("%c -> %d",A.s,A.i);
    return 0;
}