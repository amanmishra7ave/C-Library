#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define MAX_SIZE 100  // Maximum number of nodes

struct LinkedList {
    int data[MAX_SIZE];    // Data array
    int next[MAX_SIZE];    // Next pointer array (stores index of next node)
    int head;              // Head pointer (index of the first element)
    int free;              // Free list pointer (index of the next free element)
};

// Initialize the linked list
void initialize(struct LinkedList* list);

// Check if the list is full
int isFull(struct LinkedList* list);

// Check if the list is empty
int isEmpty(struct LinkedList* list);

// Insert a new element at the beginning
void insert(struct LinkedList* list, int value);

// Delete an element from the beginning
void delete(struct LinkedList* list);

// Display the elements of the list
void display(struct LinkedList* list);

#endif  // LINKEDLIST_H
