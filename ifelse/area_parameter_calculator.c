#include<stdio.h>
int main(){
    int l,b;
    printf("Enter lenght:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    int area = l*b;
    int perameter= 2*(l+b);
    if (area != perameter){
        if(area>perameter){
            printf("perameter = %d and area = %d  so area is grader than Perameter:%d",perameter,area,area); 
        }
        else{
            printf("perameter = %d and area = %d  so perameter is grader than area:%d ",perameter,area,perameter);
        }
    } 
    else{
        printf("perameter and area is equal perameter = %d and Area = %d  ",perameter,area);
    }
    return 0;
}