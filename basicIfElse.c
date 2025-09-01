// This Examples shows how to use if-else statements in C.
#include <stdio.h>

int main(){
    int number1, number2;
    number1 = 10;
    number2 = 50;

    if(number1 > number2){
        printf("O número 1 é maior que o número 2\n");
    }else{
        printf("O número 1 é menor que o número 2\n");
    }


// This example shows if the number is even or odd.
    int number = 11, result;
    result = number % 2;
    printf("A variavel resultado é: %d\n", result);

    if(result == 0){
        printf("O número é par\n");
    }else{
        printf("O número é ímpar\n");
    }

// This example shows if is hot or cold.
    float temperature = 30.0;
    if(temperature >= 30.0){
        printf("Está calor\n");
    }else{
        printf("Está frio\n");
    }

// This example shows if the student is approved or not.
    int score = 70;
    if(score >= 60){
        printf("Aluno aprovado\n");
    }else{
        printf("Aluno reprovado\n");
    }

    printf("Fora do IF\n");
}