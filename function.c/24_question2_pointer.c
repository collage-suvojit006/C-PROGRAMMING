# include<stdio.h>
int add(int *x ,int *y);
int subtract(int *x,int *y);

int main(){
   // ask form user  for any operation 
    int a;
    printf("Enter a first number:");
    scanf("%d",&a);
    int b;
    printf("Enter a sceand  number:");
    scanf("%d",&b);
     //print the massage in display 
    printf("1 for Addition ('+')\n");
    printf("2 for Subtraction (' - ')\n");
    // input the choice
    int choice;
    printf("Enter your choice (1/2):");
    scanf("%d",&choice);

    if(choice==1){
        printf(" %d + %d = %d ",a,b,add(&a,&b)); 
    }
    else if (choice==2){
        printf("%d - %d = %d ",a,b,subtract(&a,&b));
    }
    else{
        printf("Invalid Entry plases chack your entry ");
    }

    return 0;
   
}

int add(int *x ,int *y){
    return *x+*y;
}

int subtract(int *x,int *y){
    return *x-*y;
}