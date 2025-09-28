#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int rows = 2, cols = 2;
    int equal = 1;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }
        }
        if (!equal) break;
    }
    
    if (equal) {
        printf("Matrices are equal\n");
    } else {
        printf("Matrices are not equal\n");
    }
    
    return 0;
}
