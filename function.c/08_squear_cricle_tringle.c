# include<stdio.h>
float areasquear(float side);
float cricle(float radius);
float ractangle(float lenth,float width);

int main(){
    int choice;
    float side , lenth, width, radius;
    //display opation
    printf("Select to shaph to calculeat area :\n");
    printf("1 for Square \n"); 
    printf("2 for Circle \n"); 
    printf("3 for Rectangle \n");
    //input choice 
    printf("Enter Your Choice (1/2/3):");
    scanf("%d",&choice);

    // switch case to choice 
    switch(choice){
        case 1:
        printf("Enter  side :");
        scanf("%f",&side);
        printf("Area of Square : %f",areasquear(side));
        break;
        case 2:
        printf("Enter  radius :");
        scanf("%f",&radius);
        printf("Area of Cricle  : %f",cricle(radius));
        break;
        case 3:
        printf("Enter  lenth :");
        scanf("%f",&lenth);
        printf("Enter  Width :");
        scanf("%f",&width);
        printf("Area of Rectangle : %f",ractangle(lenth,width));
        break;
        default:
        printf("invalid choice chack your entry");
    }
    return 0;
}
// Calculate Area of squear 
float areasquear(float n){
    return n*n;
} 

// calculate Area of Cricle 
float cricle(float n){
    return 3.14*n*n;
} 

// calculate Ractangle
float ractangle(float lenth ,float width){
    return lenth*width ;
}