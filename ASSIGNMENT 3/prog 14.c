//Write a program to add the elements of each row and each column of a matrix
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
void calculateSums(int matrix[MAX][MAX], int rows, int cols) {
    int rowSums[MAX] = {0};
    int colSums[MAX] = {0};
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        colSums[j] = sum;
        printf("Sum of column %d: %d\n", j + 1, sum);
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
    int matrix[MAX][MAX];
    printf("Input matrix:\n");
    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    calculateSums(matrix, rows, cols);

    return 0;
}

