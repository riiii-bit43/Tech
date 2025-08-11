#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    int mid = n / 2;

    printf("\nDownward Triangle:\n");
    for (int i = mid; i >= 0; i--) {
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
