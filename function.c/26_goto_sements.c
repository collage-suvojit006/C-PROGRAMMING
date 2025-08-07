# include<stdio.h>
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    int i=1;
    table:
    printf("%d x %d = %d \n",num,i,num*i);
    i++;
    if(i<=10)
    goto table; //jump to table lebale if cindition is true 
    return 0;
}