#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int findLength(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    
    return count;
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    int length = findLength(head);
    printf("Length: %d\n", length);
    return 0;
}