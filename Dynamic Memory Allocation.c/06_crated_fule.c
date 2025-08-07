// # include<stdio.h>
// int main(){
    
//     FILE *ptr=fopen("c_programming.txt","w"); //craded a new file using c programming 
//     char str="We can do it.";
//     fputs(str,ptr);
//     return 0;
// }
#include <stdio.h>

int main() {
    FILE *ptr = fopen("c_programming.txt", "w"); // created a new file using C programming
    
    if (ptr == NULL) { // check if the file opened successfully
        printf("Error opening file!\n");
        return 1;
    }

    char str[] = "We can do it banty."; // Define as a string (character array)
    fputs(str, ptr); // Write the string to the file

    fclose(ptr); // Close the file
    return 0;
}
