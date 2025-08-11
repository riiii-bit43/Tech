#include <stdio.h>
int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                printf("%d\t", count);
                count++;
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
