#include<stdio.h>
int main(){
    int sp,cp,profit=0,loss=0 ; // sp=selling price        cp=cost price
    printf("Enter cost price :");
    scanf("%d",&cp);
    printf("Enter selling price :");
    scanf("%d",&sp);
   if(sp!=cp){  
        if(sp>cp){
         profit=sp-cp;
         printf("You gain profit \n Your profit price is :%d",profit);
     }
     else{
        loss = sp-cp;
        printf("You have been loss !! \n Your loss  price is :%d",loss);
     }
   }
   else{
    printf("You have no profit or loss");
   }  
    return 0;
}