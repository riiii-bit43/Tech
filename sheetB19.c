#include <stdio.h>

int main() {
    int rows = 5;
    
    for (int i = 0; i < rows; i++) {
        int number = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    
    return 0;
}