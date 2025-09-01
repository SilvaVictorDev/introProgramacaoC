// This example shows how to use if-else statements in C.
#include <stdio.h>

int main() {
    int number1, number2;
    number1 = 10;
    number2 = 5;

    if (number1 > number2){
        printf("Número 1 é maior que o número 2\n");
    }

// This example shows if the person is of legal age.
    int age = 20;
    if (age >= 18){
        printf("Você é maior de idade.\n");
        printf("Dentro do IF\n");
    }

//This example shows if is hot or cold.
    float temperature = 32.0;
    if (temperature >= 30.0){
        printf("Está calor\n");
    }

// This example shows if the number is even or odd.
    int number = 4, result;
    result = number % 2;
    printf("A variavel resultado é: %d\n", result);

    if (result == 0){
        printf("O número é par\n");
    }

    printf("Fora do IF\n");
}