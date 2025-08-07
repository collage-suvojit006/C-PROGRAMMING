#include<stdio.h>
int main(){
int x,y;
printf("enter x coordinates:");
scanf("%d",&x);
printf("enter y coondinates:");
scanf("%d",&y);
if(x==0 && y==0){
    printf("the point is origin");
}
else if (x==0){
    printf("lies on y - axis");
}
else if (y==0){
    printf("lies on x - axis");
}
else{
    printf("The point does not lie on x axis and y axis ");
} 
return 0;
}
