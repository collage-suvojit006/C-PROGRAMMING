# include<stdio.h>
void dowork(float a, float b, int *sum,int *pro,float *avg);
int main(){
   float a;
    printf("Enter a first number:");
    scanf("%f",&a);
    float  b;
    printf("Enter a sceand  number:");
    scanf("%f",&b);
    int sum,pro;
    float avg;
   dowork(a,b,&sum,&pro,&avg);
    printf("sum= %d , product = %d , avage = %f   ",sum,pro,avg);
    return 0;
}
void dowork(float a, float b, int *sum,int *pro,float *avg){
    *sum=a+b;
    *pro=a-b;
    *avg=(a+b)/2;
}
