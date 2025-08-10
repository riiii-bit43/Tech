#include <stdio.h>

int main() {
    long long num;
    int digitCount[10] = {0};
    int digit;

    // Input number
    printf("Enter a number: ");
    scanf("%lld", &num);

    // Count each digit
    long long temp = num;
    while (temp > 0) {
        digit = temp % 10;
        digitCount[digit]++;
        temp /= 10;
    }

    // Print repeated digits
    printf("Repeated digits:\n");
    int found = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 1) {
            printf("Digit %d occurs %d times\n", i, digitCount[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No digits are repeated.\n");
    }

    return 0;
}
