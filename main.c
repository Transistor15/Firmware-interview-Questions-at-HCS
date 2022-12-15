#include <stdio.h>
#include <stdbool.h>

struct person {
    char *name;
    int age;
    bool isMarried;
    bool isEmployed;
    float Net_worth;
};

void update_person(struct person *p, int new_age) {
    // Update the age field of the structure pointed to by p
    p->age = new_age;
}

int main(void) {
    // Define a structure variable and initialize its fields
    struct person Person = { "Cephas Kalembo", 29, false, false, 100 };

    // Declare a pointer to a structure and initialize it with the address of the
    // structure variable
    struct person *ptr_to_Struct_Person = &Person;

    // Access the fields of the structure using the pointer
    printf("Name: %s\n", ptr_to_Struct_Person->name);
    printf("Age: %d\n", ptr_to_Struct_Person->age);

    // Call the update_person function, passing the pointer to the Person structure
    // and a new age value
    update_person(ptr_to_Struct_Person, 30);

    // Print the updated age value
    printf("Updated age: %d\n", ptr_to_Struct_Person->age);

    return 0;
}
