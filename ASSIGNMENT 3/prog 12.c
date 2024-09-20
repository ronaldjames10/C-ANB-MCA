//Write a program to perform addition and subtraction between two matrices.
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
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);
    if (rows > MAX || cols > MAX) {
        printf("Matrix size exceeds the maximum allowed size of %d x %d.\n", MAX, MAX);
        return 1;
    }
 // Declare matrices
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
// Input matrices
    printf("Matrix 1:\n");
    inputMatrix(mat1, rows, cols);
    printf("Matrix 2:\n");
    inputMatrix(mat2, rows, cols);
// Perform addition
    addMatrices(mat1, mat2, result, rows, cols);
    printf("Matrix after addition:\n");
    printMatrix(result, rows, cols);
 // Perform subtraction
    subtractMatrices(mat1, mat2, result, rows, cols);
    printf("Matrix after subtraction:\n");
    printMatrix(result, rows, cols);

    return 0;
}

