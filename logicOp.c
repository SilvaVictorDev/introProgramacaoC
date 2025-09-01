#include <stdio.h>

int main(){
    int a = 5, b = 10, c = 0;
    if(a > 0 && b > 0){
        printf("O dois numeros são positivos\n");
    }else{
        printf("Pelo menos um dos numeros é negativo\n");
    }

    if(a > 0 || b > 0){
        printf("Pelo menos um dos numeros é positivo\n");
    }else{
        printf("Os dois numeros são negativos\n");
    }

    if(!c){
        printf("C é zero\n");
    }else{
        printf("C é diferente de zero\n");
    }

    int idade = 20;
    float altura = 1.75;

      if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
    } else {
      printf("Você não atende aos critérios\n");
    }

  return 0;
}