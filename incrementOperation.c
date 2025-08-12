// Attribution Operator in C
#include <stdio.h>

int main(){
 /*
Increment simple (=)
Increment with addition (+=)
Increment with subtraction (-=)
Increment with multiplication (*=)
Increment with Division (/=)    
*/
    int number1 = 10, number2, result;

    result = 10;
    printf("Resultado: %d\n",result);

    // Resultado = Resultado + 20
    result += 20;
    printf("Resultado: %d\n", result);

    // Resultado = Resultado - number1;
    result -= number1;
    printf("Resultado: %d\n", result);

    // Resultado = Resultado * number1;
    result *= number1;
    printf("Resultado: %d\n", result);

    // Resultado = Resultado / number1;
    result /= number1;
    printf("Resultado: %d\n", result);

    // Increment Operator in C
    /*
    Increment (++)
    Pre-Increment ++a
    Pos-Increment a++
    Decrement --a
    Pre-Decrement --a
    Pos-Decrement a--
    */
    // Increment and decrement
    number1 = 1;
    printf("Antes do incremento: %d\n", number1);
    number1++;
    printf("Após o incremento: %d\n", number1);
    number1--;
    printf("Após o decremento: %d\n", number1);

    // Pos-Increment and Pre-increment
    number1 = 1;
    printf("Antes do Pós-Incremento: %d\n", number1);
    result = number1++;
    printf("Após Pós-Incremento - Numero 1: %d - Resultado: %d\n", number1, result);

    result = ++number1;
    printf("Após Pre-Incremento - Numero 1: %d - Resultado: %d\n", number1, result);

}
