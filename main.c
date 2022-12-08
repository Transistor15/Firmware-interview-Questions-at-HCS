#include <stdio.h>
#include <malloc.h>
#include "stddef.h"
#include "stdlib.h"
void _printArray(int the_Array_[],int sizeOfArray);
int main() {
int tom[3]={1,2,3};
    _printArray(tom,3);
    return 0;
}
