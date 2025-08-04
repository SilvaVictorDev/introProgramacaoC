// Some example code for mathematical operators in C
#include <stdio.h>
int main() {
    int a = 10, b = 20;
    float x = 5.5, y = 2.0;

    // Arithmetic Operators
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", b, a, b / a);
    printf("Modulus: %d %% %d = %d\n", b, a, b % a);

    // Floating-point division
    printf("Floating-point Division: %.2f / %.2f = %.2f\n", x, y, x / y);

    // Increment and Decrement Operators
    printf("Increment: a++ = %d, now a = %d\n", a++, a);
    printf("Decrement: b-- = %d, now b = %d\n", b--, b);

    return 0;

}
