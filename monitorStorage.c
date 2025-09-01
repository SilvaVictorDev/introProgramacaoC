//This program monitoring the storage status.
#include <stdio.h>

int main(){
    float temperature, humidity;
    unsigned int storage, storageMin = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperature);
    printf("Entre com a umidade: \n");
    scanf("%f", &humidity);
    getchar(); // to consume the newline character left by previous scanf
    printf("Entre com o estoque: \n");
    scanf("%u", &storage);
    getchar(); // to consume the newline character left by previous scanf

    
    if(temperature > 30){
        printf("Temperatura está alta.\n");
    }else{
        printf("Temperatura está ok.\n");
    }

    if (humidity > 50){
        printf("Umidade está alta.\n");
    }else{
        printf("Umidade está ok.\n");
    }

    if (storage < storageMin){
        printf("Estoque está baixo.\n");
    }else{
        printf("Estoque está ok.\n");
    }
}