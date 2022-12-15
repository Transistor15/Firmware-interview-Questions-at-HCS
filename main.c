#include <stdio.h>
#include <stdbool.h>

struct person {
    char *name;
    int age;
    bool isMarried;
    bool isEmployed;
    float Net_worth;
};

struct node {
    struct person data;
    struct node *next;
};

void update_person(struct person *p, int new_age) {
    // Update the age field of the structure pointed to by p
    p->age = new_age;
}

int main(void) {
    // Define a structure variable and initialize its fields
    struct person Person = { "Cephas Kalembo", 29, false, false, 100 };

    // Create a linked list node and initialize its fields
    struct node person_node = { Person, NULL };

    // Declare a pointer to a structure and initialize it with the address of the
    // linked list node
    struct node *ptr_to_node = &person_node;

    // Access the fields of the linked list node using the pointer
    printf("Name: %s\n", ptr_to_node->data.name);
    printf("Age: %d\n", ptr_to_node->data.age);

    // Call the update_person function, passing a pointer to the person data
    // in the linked list node and a new age value
    update_person(&ptr_to_node->data, 30);

    // Print the updated age value
    printf("Updated age: %d\n", ptr_to_node->data.age);

    return 0;
}
