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

    // Mathematical Operations Class

    int number1, number2;
    int sum, difference, multiplication, division;

    printf("Digite o primeiro número: ");
    scanf("%d", &number1);
    printf("Digite o segundo número: ");
    scanf("%d", &number2);
    // Sum Operation
    sum = number1 + number2;
    // Difference Operation
    difference = number1 - number2;
    // Multiplication Operation
    multiplication = number1 * number2;
    // Division Operation
    division = number1 / number2;

    printf("A Soma é: %d\n", sum);
    printf("A Diferença é: %d\n", difference);
    printf("A Multiplicação é: %d\n", multiplication);
    printf("A Divisão é: %d\n", division);

    return 0;

}
