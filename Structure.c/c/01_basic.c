# include<stdio.h>
int main(){
    struct pokemon{  // user difine data type
        int hp;
        int spped;
        float attck;
        char  tier;
    };

    struct pokemon pikachu;  // member of pokemon 
    pikachu.hp=100;
    pikachu.spped=120;
    pikachu.attck = 220.20;
    pikachu.tier='A';
 printf("%d",pikachu.hp);//print the data
   
   
   struct pokemon balbasor;
   balbasor.attck=150.88;
   balbasor.hp=100;
   balbasor.spped=200;
   balbasor.tier='H';
   printf("%d",balbasor.hp);//print the data
   
    return 0;
}
