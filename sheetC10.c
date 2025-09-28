#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 2, 4, 3, 5};
    
    printf("Duplicate elements: ");
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    
    return 0;
}