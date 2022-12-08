#include <stdio.h>
#include <malloc.h>
#include "stddef.h"
#include "stdlib.h"

struct Person{
    char name[100];
    int year;
    int day;
    char address[200];
};

int main() {
    struct Person *person=(struct Person *)malloc(sizeof (struct Person)+sizeof (int));
    if(person==NULL){

        printf("run of heap memory\n");
        exit(1);
    }
    person=(struct Person *)(((char *)person+sizeof (int)-1)/sizeof (int)*sizeof (int));
    free(person);
    return 0;
}
