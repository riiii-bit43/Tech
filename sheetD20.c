#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void splitCircularList(struct Node* head, struct Node** head1, struct Node** head2) {
    if (head == NULL) return;
    
    struct Node* slow = head;
    struct Node* fast = head;
    
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    *head1 = head;
    *head2 = slow->next;
    
    slow->next = *head1;
    
    if (fast->next == head) {
        fast->next = *head2;
    } else {
        fast->next->next = *head2;
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    // Assume circular linked list is already created
    splitCircularList(head, &head1, &head2);
    return 0;
}