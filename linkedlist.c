#include "linkedlist.h"
#include <stdio.h>

void initialize(struct LinkedList* list) {
    list->head = -1;
    list->free = 0;
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        list->next[i] = i + 1;
    }
    list->next[MAX_SIZE - 1] = -1;
}

int isFull(struct LinkedList* list) {
    return list->free == -1;
}

int isEmpty(struct LinkedList* list) {
    return list->head == -1;
}

void insert(struct LinkedList* list, int value) {
    if (isFull(list)) {
        printf("List is full, cannot insert\n");
        return;
    }
    int newNode = list->free;
    list->free = list->next[newNode];
    list->data[newNode] = value;
    list->next[newNode] = list->head;
    list->head = newNode;
}

void delete(struct LinkedList* list) {
    if (isEmpty(list)) {
        printf("List is empty, cannot delete\n");
        return;
    }
    int nodeToDelete = list->head;
    list->head = list->next[nodeToDelete];
    list->next[nodeToDelete] = list->free;
    list->free = nodeToDelete;
}

void display(struct LinkedList* list) {
    if (isEmpty(list)) {
        printf("List is empty\n");
        return;
    }
    int current = list->head;
    while (current != -1) {
        printf("%d -> ", list->data[current]);
        current = list->next[current];
    }
    printf("NULL\n");
}
