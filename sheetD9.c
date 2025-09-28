#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverse(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return head;
    
    struct Node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return rest;
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    head = reverse(head);
    return 0;
}