#include "stdlib.h"
#include "stdio.h"
typedef int (*my_func_ptr)(int);
int add(int a, int b) {
    return a + b;
}

int main(void) {
    // Declare a function pointer variable and initialize it with the address of the add function
    my_func_ptr add_ptr = (my_func_ptr) &add;

    // Call the add function using the function pointer
    int result = add_ptr(3,4);
    printf("3 + 4 = %d\n", result);

    return 0;
}
