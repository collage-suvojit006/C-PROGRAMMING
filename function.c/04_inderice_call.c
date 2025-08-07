#include<stdio.h>
void namasta();
void bonju();
int main(){
    printf("Enter i for indina and f for franch :  ");
    char ch;
    scanf("%c",&ch);
    namasta();
    return 0;
}
void namasta(){
    printf("Namasta\n");
    bonju();
}
void bonju(){
    printf("Banju");
}