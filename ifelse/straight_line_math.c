#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Ente x1:");
    scanf("%d",&x1);
    printf("Ente y1:");
    scanf("%d",&y1);
    printf("Ente x2:");
    scanf("%d",&x2);
    printf("Ente y2:");
    scanf("%d",&y2);
    printf("Ente x3:");
    scanf("%d",&x3);
    printf("Ente y3:");
    scanf("%d",&y3);
   float m1 = (y2-y1)/(x2-x1);
   float m2 = (y3-y2)/(x3-x2);
   if(m1==m2){
    printf("Straight line  :  %f = %f",m1,m2); 
   }
   else{
    printf(" not a Straight line :  %f != %f  ",m1,m2);
   }

}
