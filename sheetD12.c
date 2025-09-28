#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int search(struct Node* head, int key) {
    struct Node* temp = head;
    
    while (temp != NULL) {
        if (temp->data == key)
            return 1;
        temp = temp->next;
    }
    
    return 0;
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    if (search(head, 5)) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    return 0;
}