#include <stdio.h>
#include <string.h>

typedef struct  student {
    char name[50];
    int roll;
   // int marks[7];
    float persentage;
    char grade;
}student;

void enterdata(student *x); // Pass by reference
void printdata(student x);
//void printmarks(int arr[]);

int main() {
     student banty;
    enterdata(&banty);

    // Print the data
    printdata(banty);

    return 0;
}

void enterdata(struct student *x) {
    printf("Enter Student Name: ");
    scanf("%[^\n]s", x->name);
    
    printf("Enter Student Roll No: ");
    scanf("%d", &x->roll);
    
    // for (int i = 0; i < 7; i++) {
    //     printf("Student subject %d marks: ", i + 1);
    //     scanf("%d", x->marks[i]);
    // }
    
    printf("Enter Student Percentage: ");
    scanf("%f", &x->persentage);  // Removed extra space after %f
    
    printf("Enter Student Grade: ");
    scanf(" %c", &x->grade);  // Added space before %c to ignore any stray newline
    
    printf("\n");
}

void printdata(struct student x) {
    printf("Name: %s\n", x.name);
    printf("Roll No: %d\n", x.roll);
    printf("Marks:\n");
    //printmarks(x.marks);  // Function call to print the marks
    printf("\n");
    printf("Percentage: %.2f\n", x.persentage);
    printf("Grade: %c\n", x.grade);
}

// void printmarks(int arr[]) {
//     for (int i = 0; i < 7; i++) {
//         printf("%d ", arr[i]);
//     }
// }
