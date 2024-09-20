//Write a program to check whether a matrix is a sparse matrix or not 
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
int isSparseMatrix(int matrix[MAX][MAX], int rows, int cols) {
    int zeroCount = 0;
    int totalElements = rows * cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    return (zeroCount > totalElements / 2);
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    if (rows > MAX || cols > MAX) {
        printf("Matrix size exceeds the maximum allowed size of %d x %d.\n", MAX, MAX);
        return 1;
    }
    int matrix[MAX][MAX];
    printf("Input matrix:\n");
    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    if (isSparseMatrix(matrix, rows, cols)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

