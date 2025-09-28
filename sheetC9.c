#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2, n = 5;
    int temp[k];
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }
    
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
    
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}