#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* merge(struct Node* a, struct Node* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;
    
    struct Node* result = NULL;
    
    if (a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }
    
    return result;
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    // Assume both sorted linked lists are already created
    struct Node* merged = merge(list1, list2);
    return 0;
}