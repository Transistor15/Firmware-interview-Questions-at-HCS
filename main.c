#include <stdio.h>
#include <stdbool.h>

struct person {
    char *name;
    int age;
    bool isMarried;
    bool isEmployed;
    float Net_worth;

};

int main(void) {
    // Define a structure variable and initialize its fields

    struct person Person = { "Cephas Kalembo ", 29 ,1,1, 100};

    // Declare a pointer to a structure and initialize it with the address of the
    // structure variable
    struct person *ptr_to_Struct_Person = &Person;

    // Access the fields of the structure using the pointer

    if(ptr_to_Struct_Person->isMarried && ptr_to_Struct_Person->isEmployed)
    {
        printf("my name is %s",ptr_to_Struct_Person->name);
        printf("i'm %d",ptr_to_Struct_Person->age);
        printf_s(" years old,");
        printf(" my unit Net worth is %f",ptr_to_Struct_Person->Net_worth);
        printf(" , I'm employed working for HERO CONTROL SYSTEMS LLC");
        printf(" and I'm married with a Son\n");
    }
   else
    {
        printf("my name is %s",ptr_to_Struct_Person->name);
        printf("i'm %d",ptr_to_Struct_Person->age);
        printf_s(" years old");
        printf(" my unit Net worth is %f",ptr_to_Struct_Person->Net_worth);
        printf(" , I'm unemployed");
        printf(" and unmarried\n");
    }
if (ptr_to_Struct_Person->isEmployed)
{}
    return 0;
}
