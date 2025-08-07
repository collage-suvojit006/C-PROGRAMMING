# include<stdio.h>
# include<string.h>

typedef struct pokamon{
        int hp;
        int spped;
        float attck;
        char  tier;
        char name[20];

   
} pokamon;


void change(pokamon* p); // pass by reference
void printvalu(pokamon p);

int main(){
    pokamon pikachu;
    pokamon* x= &pikachu;
 
//  printf("%p\n",x);               address of structure
//  printf("%p\n",&pikachu.hp);
//  printf("%p\n",&pikachu.spped);
//  printf("%p\n",&pikachu.attck);

 // Assigning a value using pointer 
//  (*x).hp=60; // pikachu.hp=60;
 x->hp=60;  // (*x).something == x->something   [are equal]
 x->attck=99.99;
 x->spped=220;
 x->tier='A';
 strcpy(x->name,"Pikachu");
 
 // print Original data 
 printvalu(pikachu); // function call 
 
 // change the data 
 change(&pikachu);
 
 // print after Modification data 
printf("\nPrint after Modification data \n ");
 printvalu(pikachu);


 

    return 0;
}
void change(pokamon* p){
    p->hp=100;
    p->attck=120.22;
    p->spped=440;
    p->tier='P';
    strcpy(p->name,"Mikachu");
}

void printvalu(pokamon p){
 printf("H.P:%d\n",p.hp);
 printf("Attck :%f\n",p.attck);
 printf("Spped :%d\n",p.spped);
 printf("Tier :%c\n",p.tier);
 printf(" Name :%s\n",p.name);


}