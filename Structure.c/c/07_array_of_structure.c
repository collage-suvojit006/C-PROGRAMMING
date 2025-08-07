# include<stdio.h>
# include<string.h>
int main(){
    typedef struct pokamon{
        int hp;
        float speed;
        char tier; 
        char name[15];
    } pokamon;
    pokamon arr[4];
    arr[0].hp=100;
    arr[0].speed=120.22;
    arr[0].tier='A';
    strcpy(arr[0].name,"pikachu");

    arr[1].hp=100;
    arr[1].speed=150.22;
    arr[1].tier='B';
    strcpy(arr[1].name,"Balbasor");

    arr[2].hp=100;
    arr[2].speed=200.22;
    arr[2].tier='C';
    strcpy(arr[2].name,"Mewtwo");


    arr[3].hp=100;
    arr[3].speed=200.00;
    arr[3].tier='D';
    strcpy(arr[3].name,"chalizade");

    for(int i=0;i<4;i++){
        printf(" Name : %s\n",arr[i].name);
        printf(" HP :%d \n",arr[i].hp);
        printf(" Speed :%f\n",arr[i].speed);
        printf("Tier : %c \n",arr[i].tier);
        printf("\n");
    }




    return 0;
}