//This program calculates the average of three grades
//

#include <stdio.h>

int main() {
    float grade1, grade2, grade3, average;

    printf("### Programa de Cálculo de Médias ###\n");

    // Input grades
    printf("\nDigite a nota 1: ");
    scanf("%f", &grade1);
    printf("Digite a nota 2: ");
    scanf("%f", &grade2);
    printf("Digite a nota 3: ");
    scanf("%f", &grade3);

    // Calculate average
    average = (grade1 + grade2 + grade3) / 3;

    // Output average
    printf("A média das 3 notas é: %.2f\n", average);

    return 0;
}