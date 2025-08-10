#include <stdio.h>
#include <math.h>

int main() {
    int n, rem, count = 0;
    int original;
    double cube = 0.0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        cube += pow(rem, count);
        temp /= 10;
    }

    if ((int)cube == original) {
        printf("The number is an Armstrong number");
    } else {
        printf("The number is not an Armstrong number");
    }

    return 0;
}
