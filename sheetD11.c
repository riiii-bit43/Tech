#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int findLength(struct Node* head) {
    if (head == NULL)
        return 0;
    return 1 + findLength(head->next);
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    int length = findLength(head);
    printf("Length: %d\n", length);
    return 0;
}