#include <stdio.h>      // for printf
#include "functions.h"  // for read_int

int main(void) {
    printf("Enter the first number: ");
    int a = read_int();
    printf("Enter the second number: ");
    int b = read_int();
    float sum = (a + b) * 0.5;
    printf("The sum of %f and %d is %d\n", a, b, a + b);
    return 0;
}