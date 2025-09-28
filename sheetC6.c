#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int search = 30;
    int low = 0, high = 4, found = 0;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == search) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (!found) {
        printf("Element not found\n");
    }
    
    return 0;
}