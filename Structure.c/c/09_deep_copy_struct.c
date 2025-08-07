# include<stdio.h>
# include<string.h>
int main(){
    typedef struct pokamon{
        int hp;
        float speed;
        char tier; 
        char name[15];
    } pokamon;

    pokamon a,b;

    a.hp=100;
    strcpy(a.name,"pikachu");
    a.speed=122.0;
    a.tier='A';


    b= a; // deep copy a to b

   printf("%d",b.hp);

    
    return 0;
}    