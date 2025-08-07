# include<stdio.h>
float balnce;

void deposit(){
   float amount;
   printf("Enter Deposit amount :");
   scanf("%f",&amount);
   if(amount<0){
         printf("invalid amount !!\n");
         return;
   }
   balnce=balnce+amount;
   printf("%.2f Amount Added on your Bank Account\n",amount);
   printf("**********************************************\n");
}

void withdraw(){
    float amount;
    printf("Enter Withdraw Amount :");
    scanf("%f",&amount);
    if(amount>balnce){
        printf("Insufficient Balance !!\n");
        return;
    }
    balnce=balnce-amount;
    printf("%.2f Amount Withdraw form your bank account\n",amount);
    printf("**********************************************\n");

}

void show(){
    printf("your current bank balance is : %.2f\n",balnce);

}


int main(){
  while(1){
    printf("\n************************\n");
       printf("   Banking program \n");
      printf("\n************************\n");  
        printf("  1. Deposit\n");
        printf("  2. withdraw\n");
       printf("  3. show blance\n");
       printf("  4.Exit\n");
       printf("*************************\n");
      int choice;
      printf("Enter your Choice :");
      scanf("%d",&choice);
      
      if(choice==1){
         deposit();     
      }
      else if(choice==2){
        withdraw();
      }
      else if(choice==3){
        show();
      }
      else if(choice==4){
        break;
      }
      else{
        printf("Wrong choice !!");
      }
  }  
    return 0;
}