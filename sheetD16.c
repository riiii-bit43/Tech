#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int detectCycle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    
    return 0;
}

int main() {
    struct Node* head = NULL;
    // Assume linked list is already created
    if (detectCycle(head)) {
        printf("Cycle detected\n");
    } else {
        printf("No cycle\n");
    }
    return 0;
}