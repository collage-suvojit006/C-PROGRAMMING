# include<stdio.h>
int main(){
     typedef struct  pokemon{  // user difine data type
        int hp;
        int spped;
        float attck;
        char  tier;
        char name[20];
    }pokamon;

    //struct pokemon pikachu;  // member of pokemon 
    // pikachu.hp=120;
    // pikachu.spped=120;
    // pikachu.attck = 220.20;
    // pikachu.tier='A';
    pokamon pikachu={100,220,99.99,'A',"Pikachu"}; //order wice inclization 
   printf("%d\n",pikachu.hp);//print the data
   printf("%d\n",pikachu.spped);
   printf("%f\n",pikachu.attck);
   printf("%c\n",pikachu.tier);
   printf("%s\n",pikachu.name);
   
  // struct pokemon balbasor;
  pokamon balbasor={100,60,88.8,'B',"Balbasor"};
//    balbasor.attck=150.88;
//    balbasor.hp=100;       // two mathot are equal
//    balbasor.spped=200;
//    balbasor.tier='H';

   printf("%d\n",balbasor.hp);
   printf("%d\n",balbasor.spped);
   printf("%f\n",balbasor.attck);
   printf("%c\n",balbasor.tier);
   printf("%s\n",balbasor.name);
   
    return 0;
}
