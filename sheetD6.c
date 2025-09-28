#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteLast(struct Node** head) {
    if (*head == NULL) return;
    
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    deleteLast(&head);
    return 0;
}