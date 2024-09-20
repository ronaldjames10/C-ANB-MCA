//Write a program to perform the multiplication of two matrices
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
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main() {
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (col1 != row2) {
        printf("Matrices cannot be multiplied. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
	    printf("Input the first matrix:\n");
    inputMatrix(mat1, row1, col1);
    printf("Input the second matrix:\n");
    inputMatrix(mat2, row2, col2);
    multiplyMatrices(mat1, mat2, result, row1, col1, row2, col2);
    printf("Result matrix after multiplication:\n");
    printMatrix(result, row1, col2);

    return 0;
}

