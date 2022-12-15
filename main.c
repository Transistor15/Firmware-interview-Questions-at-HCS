//Polymorphism is a programming concept that allows different types of objects to be treated as if they were instances of the same type. This allows for code reuse and makes it easier to write programs that can handle objects of different types in a consistent way.

//In C, polymorphism is typically implemented using function pointers. This allows you to create a function that can be used to operate on objects of different types.

//Here is an example of how you could implement polymorphism using function pointers in the code you provided above:
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct person {
    char *name;
    int age;
    bool isMarried;
    bool isEmployed;
    float Net_worth;
};

struct animal {
    char *species;
    int age;
};

// Function pointer type that can be used to operate on objects of different types
typedef void (*object_operation_func)(void *);

void update_person(struct person *p, int new_age) {
    // Update the age field of the structure pointed to by p
    p->age = new_age;
}

void update_animal(struct animal *a, int new_age) {
    // Update the age field of the structure pointed to by a
    a->age = new_age;
}

// Function that applies a given operation to an object of a given type
void apply_operation_to_object(void *obj, object_operation_func op, const char *type) {
    if (strcmp(type, "person") == 0) {
        // obj is a struct person, so call the update_person function
        op(obj);
    } else if (strcmp(type, "animal") == 0) {
        // obj is a struct animal, so call the update_animal function
        op(obj);
    } else {
        printf("Unknown type: %s\n", type);
    }
}

int main(void) {
    // Define a structure variable and initialize its fields
    struct person Person = { "Cephas Kalembo", 29, false, false, 100 };

    // Define a structure variable and initialize its fields
    struct animal Animal = { "dog", 5 };

    // Declare function pointers for the update_person and update_animal functions
    object_operation_func update_person_ptr = (object_operation_func) &update_person;
    object_operation_func update_animal_ptr = (object_operation_func) &update_animal;

    // Apply the update_person operation to the Person structure
    apply_operation_to_object(&Person, update_person_ptr, "person");

    // Print the updated age value
    printf("Person's updated age: %d\n", Person.age);

    // Apply the update_animal operation to the Animal structure
    apply_operation_to_object(&Animal, update_animal_ptr, "animal");

    // Print the updated age value
    printf("Animal's updated age: %d\n", Animal.age);

    return 0;
}
