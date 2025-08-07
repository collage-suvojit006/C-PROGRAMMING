# include<stdio.h>
void print_n_1(int n);
int main(){
    int n=10;
   print_n_1(10);
    return 0;
}

void  print_n_1(int n){
 if(n>0){
    printf(" %d ",n);
    print_n_1(n-1);
 }
  return;
}
