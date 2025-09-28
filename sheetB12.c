#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void calculateSums(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int rowSum[MAX_ROWS] = {0};
    int colSum[MAX_COLS] = {0};
    
    // Calculate row sums and column sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    
    // Display the matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display row sums
    printf("\nRow-wise Sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    
    // Display column sums
    printf("\nColumn-wise Sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    
    printf("Enter number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    
    printf("Enter number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);
    
    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid dimensions!\n");
        return 1;
    }
    
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    calculateSums(matrix, rows, cols);
    
    return 0;
}