#include <stdio.h>

int main() {
    int choice;
    float a, b;
    
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    switch(choice) {
        case 1: printf("Result: %.2f\n", a + b); break;
        case 2: printf("Result: %.2f\n", a - b); break;
        case 3: printf("Result: %.2f\n", a * b); break;
        case 4: printf("Result: %.2f\n", a / b); break;
        default: printf("Invalid choice\n");
    }
    
    return 0;
}