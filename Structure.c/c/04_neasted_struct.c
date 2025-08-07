# include<stdio.h>
# include<string.h>

struct pokamon{
    int hp;
    int spped;
    float attck;
    char  tier;
};

struct spicalpokamon{
    char ability[50];
    int power;
    struct pokamon op;   // op is a variable to ascess pokamon function;
};
 typedef struct legendarypokamon{
   int skin;
   struct spicalpokamon base;
}lengendarypokamon;

int main(){
    lengendarypokamon pikachu;
    pikachu.base.op.hp=100;
    
    printf("H.P :%d\n",pikachu.base.op.hp);
     

   
    
    return 0;
}