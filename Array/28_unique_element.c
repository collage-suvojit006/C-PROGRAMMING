 #include <stdio.h>

int main() {
    int n, i, j, isUnique;
    
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements in the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are: ");
    
    // Find and print unique elements
    for (i = 0; i < n; i++) {
        isUnique = 1;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
