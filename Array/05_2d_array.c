# include<stdio.h>
int main(){
    int marks[2][3]; // _ _ _ | _ _ _
    marks[0][0]=89;
    marks[0][1]=45;
    marks[0][2]=78;
    //scend array
    marks[1][0]=90;
    marks[1][2]=47;
    marks[1][3]=69;
    printf("%d ",marks[0]);
    return 0;
}