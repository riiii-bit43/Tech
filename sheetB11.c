#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least 2 elements\n");
        return -1;
    }
    
    int first = INT_MIN, second = INT_MIN;
    
    // Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }
    
    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    
    if (second == INT_MIN) {
        printf("All elements are equal\n");
        return -1;
    }
    
    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int secondLargest = findSecondLargest(arr, n);
    
    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    }
    
    return 0;
}
