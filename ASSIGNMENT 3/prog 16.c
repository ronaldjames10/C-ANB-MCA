//Write a program to check whether a matrix is an identity matrix or not.
#include <stdio.h>
#define MAX 10 
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int isIdentityMatrix(int matrix[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                
                if (matrix[i][j] != 1) {
                    return 0;
                }
            } else {
                
                if (matrix[i][j] != 0) {
                    return 0; 
                }
            }
        }
    }
    return 1; 
}
int main() {
    int size;
    printf("Enter the size of the matrix (n for an n x n matrix): ");
    scanf("%d", &size);
    if (size > MAX) {
        printf("Matrix size exceeds the maximum allowed size of %d x %d.\n", MAX, MAX);
        return 1;
    }
    int matrix[MAX][MAX];
    printf("Input matrix:\n");
    inputMatrix(matrix, size, size);
    printMatrix(matrix, size, size);

    // Check if the matrix is an identity matrix
    if (isIdentityMatrix(matrix, size)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

