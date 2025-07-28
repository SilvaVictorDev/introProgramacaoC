#include <stdio.h>

int main(){

    int population1, turistcAttractions1,
        population2, turistcAttractions2;
    float area1, PIB1,
          area2, PIB2;
    char state1[50], cardCode1[10], nameCity1[50], 
         state2[50], cardCode2[10], nameCity2[50];

    // Information of card1

    printf("Welcome to the Super Trunfo game!\n");

    printf("Enter the information of the card1:\n");

    printf("Enter the name of the state: ");
    fgets(state1, sizeof(state1), stdin);

    printf("Enter the code of the card1: ");
    fgets(cardCode1, sizeof(cardCode1), stdin);

    printf("Enter the name of the city: ");
    fgets(nameCity1, sizeof(nameCity1), stdin);

    printf("Enter the population of the city: ");
    scanf("%d", &population1);

    printf("enter the area of the state: ");
    scanf("%f", &area1);

    printf("Enter the PIB of the state: ");
    scanf("%f", &PIB1);

    printf("Enter the number of tourist attractions: ");
    scanf("%d", &turistcAttractions1);

    // Information of card2

    printf("enter the information of the card2:\n");

    printf("Enter the name of the state: ");
    fgets(state2, sizeof(state2), stdin);

    printf("Enter the code of the card2: ");
    fgets(cardCode2, sizeof(cardCode2), stdin);

    printf("Enter the name of the city: ");
    fgets(nameCity2, sizeof(nameCity2), stdin);

    printf("Enter the population of the city: ");
    scanf("%d", &population2);

    // Print information of card1
    printf("\nCard1:\n");
    printf("State: %s", state1);
    printf("Card Code: %s", cardCode1);
    printf("City: %s", nameCity1);
    printf("Population: %d\n", population1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Tourist Attractions: %d\n", turistcAttractions1);

    // Print information of card2
    printf("\nCard2:\n");
    printf("State: %s", state2);
    printf("Card Code: %s", cardCode2);
    printf("City: %s", nameCity2);
    printf("Population: %d\n", population2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Tourist Attractions: %d\n", turistcAttractions2);


    return 0;

}