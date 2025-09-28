#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteFirst(struct Node** head) {
    if (*head == NULL) return;
    
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    deleteFirst(&head);
    return 0;
}