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
  
    printf("\nLeft Triangle:\n");
    for (int i = 0; i < n; i++) {
        int stars = (i <= mid) ? i + 1 : n - i;
        for (int j = 0; j < stars; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
