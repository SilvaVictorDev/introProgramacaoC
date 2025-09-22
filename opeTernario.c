# include <stdio.h>

int main(){
    int idade = 16;
    int resultado;

    resultado = idade >= 18 ? 1 : 0;
    
    if (resultado == 1)
    {
        printf("Vocé é maior de idade\n");
    }
    else
    {
        printf("Vocé é menor de idade\n");
    }

int temperatura = 31;


temperatura > 30 ? printf("Está calor!\n") : printf("Está frio!\n");

int num1 = 40, num2 = 20;
int maior;

num1 > num2 ? (maior = num1) : (maior = num2);

printf("O número maior é: %d\n", maior);

return 0;
}