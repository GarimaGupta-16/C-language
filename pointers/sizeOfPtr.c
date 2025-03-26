#include <stdio.h>

int main() {
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    double *doublePtr;
    void *voidPtr;

    // Print sizes of different pointers
    printf("Size of int pointer: %lu bytes\n", sizeof(intPtr));
    printf("Size of char pointer: %lu bytes\n", sizeof(charPtr));
    printf("Size of float pointer: %lu bytes\n", sizeof(floatPtr));
    printf("Size of double pointer: %lu bytes\n", sizeof(doublePtr));
    printf("Size of void pointer: %lu bytes\n", sizeof(voidPtr));

    return 0;
}
