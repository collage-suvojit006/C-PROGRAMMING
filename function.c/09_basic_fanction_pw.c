#include<stdio.h>
void bangadash(){
    printf("You are form Bangla dash\n");
    return;
} 
void napel(){
    printf("You are form napel\n");
    bangadash();
    return;
}
void vutarn(){
    printf("You are form vutarn\n");
    napel();
    return; 
}
void england(){
     printf("You are form England\n");
     vutarn();
     return;
}
void india(){
    printf("You are form india \n");
    england();
    return;
}
int main(){
    india();
    return 0;
}