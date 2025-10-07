#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
        // printf("%d ", n); se colocarmos o printf aqui, ele imprime de 1 até n, ou seja, na ordem de contagem normal
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}