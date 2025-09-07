#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    int n, i, isPrime = 1; // assume prime
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0; // divisible → not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}
