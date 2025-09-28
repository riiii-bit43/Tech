#include <stdio.h>

void concatenateStrings(char str1[], char str2[], char result[]) {
    int i, j;
    
    // Copy first string
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    
    // Copy second string
    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }
    
    // Add null terminator
    result[i + j] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];
    
    printf("Enter first string: ");
    scanf("%99[^\n]", str1);
    getchar();
    
    printf("Enter second string: ");
    scanf("%99[^\n]", str2);
    
    concatenateStrings(str1, str2, result);
    
    printf("Concatenated result: %s\n", result);
    
    return 0;
}