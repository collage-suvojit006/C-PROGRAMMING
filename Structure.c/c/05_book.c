# include<stdio.h>
# include<string.h>

struct books{
    float price;
    int pageno;
    char name[20];

};
void prindata(struct books x);

float main(){
  struct books mahabharat;
  mahabharat.name[20]="MahaBharat";
  mahabharat.pageno=1000;
  mahabharat.price=100.2;
    return 0.0;
}

void prindata(struct books x){
    puts(x.name);
    printf("Page No : %d \n",x.pageno);
    printf("price : %f \n",x.price);
}
