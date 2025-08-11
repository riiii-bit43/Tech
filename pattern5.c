#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int mid = n / 2;  

    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++) {
            printf("  "); 
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            printf("  "); 
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

