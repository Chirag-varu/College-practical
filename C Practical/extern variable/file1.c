#include <stdio.h>

extern int globalVar; // Declaration of globalVar

int main() {
    printf("The value of globalVar from file1.c: %d\n", globalVar);
    return 0;
}
