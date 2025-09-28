#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"John", "Alice", "Bob", "David", "Charlie"};
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[20];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    printf("Sorted names: ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", names[i]);
    }
    
    return 0;
}