#include <stdio.h>

int main(){

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    int numero;
    printf("Digite um número para calcular a tabuada...");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    

    return 0;
}