// This game will use if, else and switch to make a interactive menu.

#include <stdio.h>
#include <string.h>

// Super Trunfo Game Version 5
// Link da atividade no github Estacio
// https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-SilvaVictorDev/blob/main/super_trunfo.c

int main(){

    // Variables declaration

    int population1, turistcAttractions1,
        population2, turistcAttractions2,
        option;
    float area1, PIB1, densPop1, pibPerCap1, supPower1, invDensPop1,
          area2, PIB2, densPop2, pibPerCap2, supPower2, invDensPop2;
    char country1[50], country2[50];

    printf("##### Bem vindo ao Jogo Super Trunfo! #####\n");

    // Information of card1

    printf("\nDigite as informações da carta 1:\n");

    printf("Digite o nome do País: ");
    fgets(country1, sizeof(country1), stdin);
    country1[strcspn(country1, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &population1);
    getchar();

    printf("Digite a área: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turistcAttractions1);
    getchar(); // Clear the newline character from the input buffer

    // Information of card2

    printf("\nDigite as informações da carta 2:\n");

    printf("Digite o nome do País: ");
    fgets(country2, sizeof(country2), stdin);
    country2[strcspn(country2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &population2);
    getchar();

    printf("Digite a área: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    getchar();

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


    // Implement of menu interactive

    printf("##### MENU #####\n");
    printf("Selecione a opção desejada:\n");
    printf("1. Regras do Game.\n");
    printf("2. Comparar o atributo População\n");
    printf("3. Comparar o atributo Área\n");
    printf("4. Comparar o atributo PIB\n");
    printf("5. Comparar o atributo Ponto Turístico\n");
    printf("6. Comparar o atributo Densidade Populacional\n");

    printf("Digite a opção desejada!: ");
    scanf("%d", &option);
    getchar();

    printf("\n##### Resultado Final do Super Trunfo #####\n");

    switch (option)
    {
    case 1:
        // Rules of the Game - Regras do Game
        printf("As regras do game são:\n");
        printf("Cada jogador escolhe uma país diferentes.\n");
        printf("Cada jogador escolhe um atributo para comparar.\n");
        printf("O jogador com o maior valor no atributo escolhido vence a rodada.\n");
        printf("Para o atributo Densidade Populacional, vence o jogador com o menor valor.\n");
        printf("Em caso de empate, a rodada é considerada nula.\n");
        break;

    case 2:
        // Logic comparation of population - Lógica de comparação da população
        if (population1 == population2)
        {
            printf("\nPopulação %s: %d \nPopulação %s: %d\n",country1, population1, country2, population2);
            printf("\nEmpate!\n");
        }else if (population1 > population2)
        {
            printf("\nPopulação %s: %d \nPopulação %s: %d\n",country1, population1, country2, population2);
            printf("\n%s Ganhou!\n", country1);
        }else{
            printf("\nPopulação %s: %d \nPopulação %s: %d\n",country1, population1, country2, population2);
            printf("\n%s Ganhou!\n", country2);
        }

        break;

    case 3:
        // Logic comparation of area - Lógica de comparação da área
        if (area1 == area2)
        {
            printf("\nÁrea %s: %.2f Área %s: %.2f\n", country1, area1, country2, area2);
            printf("\nEmpate!");
        }else if (area1 > area2)
        {
            printf("\nÁrea %s: %.2f Área %s: %.2f\n", country1, area1, country2, area2);
            printf("\n%s Ganhou!\n", country1);
        }else{
            printf("\nÁrea %s: %.2f Área %s: %.2f\n", country1, area1, country2, area2);
            printf("\n%s Ganhou!", country2);
        }
        break;
    case 4:
        // Logic comparation of PIB - Lógica de comparação do PIB
        if (PIB1 == PIB2)
        {
            printf("\nPIB %s: %.2f PIB %s: %.2f\n", country1, PIB1, country2, PIB2);
            printf("\nEmpate!");
        }else if (PIB1 > PIB2)
        {
            printf("\nPIB %s: %.2f PIB %s: %.2f\n", country1, PIB1, country2, PIB2);
            printf("\n%s Ganhou!\n", country1);
        }else{
            printf("\nPIB %s: %.2f PIB %s: %.2f\n", country1, PIB1, country2, PIB2);
            printf("\n%s Ganhou!", country2);
        }
        break;
    case 5:
        // Logic comparation of turistc attraction - Lógica de comparação de Ponto Turístico
        if (turistcAttractions1 == turistcAttractions2)
        {
            printf("\nPontos Turísticos %s: %d Pontos Turísticos %s: %d\n", country1, turistcAttractions1, country2, turistcAttractions2);
            printf("\nEmpate!");
        }else if (turistcAttractions1 > turistcAttractions2)
        {
            printf("\nPontos Turísticos %s: %d Pontos Turísticos %s: %d\n", country1, turistcAttractions1, country2, turistcAttractions2);
            printf("\n%s Ganhou!\n", country1);
        }else{
            printf("\nPontos Turísticos %s: %d Pontos Turísticos %s: %d\n", country1, turistcAttractions1, country2, turistcAttractions2);
            printf("\n%s Ganhou!", country2);
        }
        break;
    case 6:
        // Logic comparation of population density inverse the low winner - Lógica de comparação da Densidade Populacional invertida a menor vence
        if (densPop1 == densPop2)
        {
            printf("\nDensidade Populacional %s: %.2f Densidade Populacional %s: %.2f\n", country1, densPop1, country2, densPop2);
            printf("\nEmpate!");
        }else if (densPop1 < densPop2)
        {
            printf("\nDensidade Populacional %s: %.2f Densidade Populacional %s: %.2f\n", country1, densPop1, country2, densPop2);
            printf("\n%s Ganhou!\n", country1);
        }else{
            printf("\nDensidade Populacional %s: %.2f Densidade Populacional %s: %.2f\n", country1, densPop1, country2, densPop2);
            printf("\n%s Ganhou!", country2);
        }
        break;
    
    default:
        printf("*** OPÇÃO INVALIDA!!! ***");
        break;
    }


    /*
    printf("\n##### Informações das Cartas ######\n");

    
    Print information of card1

    printf("\nCarta 1:\n");
    printf("País: %s", country1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", turistcAttractions1);
    printf("Densidade Populacional: %.2f hab/km2\n", densPop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCap1);

    // Print information of card2
    
    printf("\nCarta 2:\n");
    printf("País: %s", country2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Túristicos: %d\n", turistcAttractions2);
    printf("Densidade Populacional: %.2f hab/km2\n", densPop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCap2);
    */

    // Print of Winner card
    
    printf("\nPaíses comparados: %s e %s\n", country1, country2);
    if (option = 2)
    {
        printf("O atributo de comparação escolhido foi População\n");
    }else if (option = 3)
    {
        printf("O atributo de comparação escolhido foi Área\n");
    }else if (option = 4)
    {
        printf("O atributo de comparação escolhido foi PIB\n");
    }else if (option = 5)
    {
        printf("O atributo de comparação escolhido foi Ponto Turístico\n");
    }else if (option = 6)
    {
        printf("O atributo de comparação escolhido foi Densidade Populacional\n");
    }else{
        printf("Opção inválida, não foi possível determinar o vencedor.\n");
    }


return 0;

}