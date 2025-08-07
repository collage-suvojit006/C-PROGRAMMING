#include<stdio.h>
void namasta();
void bonju();
int main(){
    printf("Enter i for indina and f for franch :  ");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namasta();
    }
    else{
        bonju();
    }
    return 0;
}
void namasta(){
    printf("Namasta");
}
void bonju(){
    printf("Banju");
}