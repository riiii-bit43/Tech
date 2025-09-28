#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main() {
    struct Complex c1 = {2.5, 3.7};
    struct Complex c2 = {1.8, 4.2};
    struct Complex sum = add(c1, c2);
    
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}