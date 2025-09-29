//Esse game irá gerar um número aleatorio entre 1 e 100 e o usuário deverá adivinhar se o número é maior, menor ou igual ao número gerado.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numerojogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gera um número aleatório entre 1 e 100
    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    // Início do jogo
    printf("Bem vindo ao jogo Maior, Menor ou igual!\n");
    printf("Você deve escolher um número e o tipo de comparação:\n");
    printf("M. para Maior\n");
    printf("N. para Menor\n");
    printf("I. para Igual\n");

    printf("Digite a comparação desejada (M, N ou I): ");
    scanf(" %c", &tipoComparacao);

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numerojogador);

    // Exibição do número do computador
    printf("Número do Computador: %d\n", numeroComputador);

    switch(tipoComparacao){
        case 'M':
        case 'm':
            if(numerojogador > numeroComputador){
                printf("Você ganhou! %d é maior que %d\n", numerojogador, numeroComputador);
            }else{
                printf("Você perdeu! %d não é maior que %d\n", numerojogador, numeroComputador);
            }
            break;
        case 'N':
        case 'n':
            if(numerojogador < numeroComputador){
                printf("Você ganhou! %d é menor que %d\n", numerojogador, numeroComputador);
            }else{
                printf("Você perdeu! %d não é menor que %d\n", numerojogador, numeroComputador);
            }
            break;
        case 'I':
        case 'i':
            if(numerojogador == numeroComputador){
                printf("Você ganhou! %d é igual a %d\n", numerojogador, numeroComputador);
            }else{
                printf("Você perdeu! %d não é igual a %d\n", numerojogador, numeroComputador);
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha M, N ou I.\n");
    }

    return 0;
}