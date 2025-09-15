// This game will use if, else and switch to make a interactive menu.

#include <stdio.h>

// Super Trunfo Game Version 5
// Link da atividade no github Estacio
// https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-SilvaVictorDev/blob/main/super_trunfo.c

int main(){

    // Variables declaration

    int population1, turistcAttractions1,
        population2, turistcAttractions2;
    float area1, PIB1, densPop1, pibPerCap1, supPower1, invDensPop1,
          area2, PIB2, densPop2, pibPerCap2, supPower2, invDensPop2;
    char country1[50], country2[50];

    printf("##### Bem vindo ao Jogo Super Trunfo! #####\n");

    // Information of card1

    printf("\nDigite as informações da carta 1:\n");

    printf("Digite o nome do Pais: ");
    fgets(country1, sizeof(country1), stdin);

    printf("Digite a população: ");
    scanf("%d", &population1);
    getchar();

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistcAttractions1);
    getchar(); // Clear the newline character from the input buffer

    // Information of card2

    printf("\nDigite as informações da carta 2:\n");

    printf("Digite o nome do estado: ");
    fgets(country2, sizeof(country2), stdin);

    printf("Digite a população: ");
    scanf("%d", &population2);
    getchar();

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistcAttractions2);
    getchar();

    // Calcutation of Population Density, PIB per capita, Inverse of Population Density and Super Power

    densPop1 = (float) population1 / area1;
    invDensPop1 = 1 / densPop1;
    pibPerCap1 = (PIB1 * 1000000000) / (float) population1;
    supPower1 = (float) population1 + (float) turistcAttractions1 + area1 + PIB1 + invDensPop1 + pibPerCap1;

    densPop2 = (float) population2 / area2;
    invDensPop2 = 1 / densPop2;
    pibPerCap2 = (PIB2 * 1000000000) / (float) population2;
    supPower2 = (float) population2 + (float) turistcAttractions2 + area2 + PIB2 + invDensPop2 + pibPerCap2;

    printf("\n##### Informações das Cartas ######\n");

    // Print information of card1

    printf("\nCarta 1:\n");
    printf("Estado: %s", country1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", turistcAttractions1);
    printf("Densidade Populacional: %.2f hab/km2\n", densPop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCap1);

    // Print information of card2
    
    printf("\nCarta 2:\n");
    printf("Estado: %s", country2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Túristicos: %d\n", turistcAttractions2);
    printf("Densidade Populacional: %.2f hab/km2\n", densPop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCap2);

    // Print of Winner card

    printf("\n##### Resultado do Jogo: ######\n");

    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - São Paulo (SP) PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Carta 2 - Rio de Janeiro (RJ) PIB: %.2f Bilhões de Reais\n", PIB2);

    if (PIB1 > PIB2) {
        printf("A carta 1 (São Paulo) venceu!\n");
    }else{
        printf("A carta 2 (Rio de Janeiro) venceu!\n");
    }

return 0;

}