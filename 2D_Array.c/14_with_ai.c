#include<stdio.h>

int main() {
    // Input size of the first 2D array
    int m, n;
    printf("Enter first array Rows No.: ");
    scanf("%d", &m);
    printf("Enter first array Columns No.: ");
    scanf("%d", &n);
    
    int arr[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Enter element at [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input size of the second 2D array
    int p, q;
    printf("\nEnter second array Rows No.: ");
    scanf("%d", &p);
    printf("Enter second array Columns No.: ");
    scanf("%d", &q);
    
    // Check if matrices can be multiplied
    if (n != p) {
        printf("Error: Columns of first array must match rows of second array for multiplication.\n");
        return 1;
    }

    int arr2[p][q];
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("Enter element at [%d, %d]: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Print first array
    printf("\nThis is your First Array:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print second array
    printf("\nThis is your Second Array:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // Calculate the result array (matrix multiplication)
    int result[m][q];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            result[i][j] = 0;
            for(int k = 0; k < n; k++) {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    // Print the result
    printf("\nResultant Array after Multiplication:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
