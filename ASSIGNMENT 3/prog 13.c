//Write a program to transpose a matrix.
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
void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    if (rows > MAX || cols > MAX) {
        printf("Matrix size exceeds the maximum allowed size of %d x %d.\n", MAX, MAX);
        return 1;
    }
    // Declare matrices
    int matrix[MAX][MAX], transposed[MAX][MAX];
    // Input the matrix
    printf("Input matrix:\n");
    inputMatrix(matrix, rows, cols);
    // Transpose the matrix
    transposeMatrix(matrix, transposed, rows, cols);
    // Print the original matrix
    printf("Original matrix:\n");
    printMatrix(matrix, rows, cols);
    // Print the transposed matrix
    printf("Transposed matrix:\n");
    printMatrix(transposed, cols, rows);
    return 0;
}

