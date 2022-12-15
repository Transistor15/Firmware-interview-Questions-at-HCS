#include <stdio.h>
#include <stdlib.h>

// Define a structure for the nodes of the linked list
struct node {
    int data;
    struct node *next;
};

int main(void) {
    // Create the head node of the linked list and initialize its fields
    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    // Create the second node of the linked list and initialize its fields
    struct node *second = malloc(sizeof(struct node));
    second->data = 20;
    second->next = NULL;

    // Link the head and second nodes together
    head->next = second;

    // Create the third node of the linked list and initialize its fields
    struct node *third = malloc(sizeof(struct node));
    third->data = 30;
    third->next = NULL;

    // Link the second and third nodes together
    second->next = third;

    // Print the linked list
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
