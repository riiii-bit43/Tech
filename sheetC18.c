#include <stdio.h>

int main() {
    int a[3] = {1, 3, 5};
    int b[3] = {2, 4, 6};
    int c[6];
    int *p1 = a, *p2 = b, *p3 = c;
    
    while (p1 < a + 3 && p2 < b + 3) {
        if (*p1 < *p2) {
            *p3++ = *p1++;
        } else {
            *p3++ = *p2++;
        }
    }
    
    while (p1 < a + 3) {
        *p3++ = *p1++;
    }
    
    while (p2 < b + 3) {
        *p3++ = *p2++;
    }
    
    printf("Merged array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}