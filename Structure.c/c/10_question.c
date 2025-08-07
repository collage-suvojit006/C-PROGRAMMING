# include<stdio.h>
# include<conio.h>
# include<string.h>
# include<stdbool.h>

typedef struct dates{
    int day;
    int month;
    int year;
}date;

int main(){
    date a ,b;
    a.day=16;
    a.month=11;
    a.year=2006;

    b.day=22;
    b.month=11;
    b.year=2006;


    bool flack=true;
    if(a.day==b.day) flack=false;
    if (a.month==b.month) flack= false;
    if(a.year==b.year) flack=false;

    flack ? printf("Same"):printf("Not same");
    return 0;
}
