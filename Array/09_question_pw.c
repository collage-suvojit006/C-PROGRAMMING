#include <stdio.h>
int main(){
    int marks[10]={98,58,45,21,54,32,56,78,29,34};
    for(int i=0 ;i<10;i++){
        if (marks[i]<=35){
            printf(" The student Roll no :%d   and is marks is : %d \n",i+1,marks[i]);
        } 
    }
    return 0;
}