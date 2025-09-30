#include <stdio.h>

int main(){
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i == 5);
    
    int numero;

    do
    {
    printf("Digite um número par para sair do programa...");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par!\n", numero);
    } else {
        printf("O número %d é ímpar!\n", numero);
    }
    } while (numero % 2 != 0);

    printf("Você digitou um múmero par, saindo do programa...\n");
    

    return 0;
    
}