#include <stdio.h>

int main() {
    int age;
    float height;
    char option;
    char name[20];
    // sintax scanf function
    // scanf("format1" "format2", &variable1, variable2, ...); // Read input from the user and store it in a variable
    printf("Enter your age: ");
    scanf("%d", &age); // Read an integer from the user and store it in age
    printf("your age is: %d\n", age); // Print the age

    printf("Enter your height: ");
    scanf("%f", &height); // Read a float from the user and store it in height
    printf("your height is: %.2f\n", height); // Print the height with two decimal places

    printf("enter your name: ");
    scanf("%s", name); // Read a string from the user and store it in name
    printf("your name is: %s\n", name); // Print the name

    printf("Enter an option (Y or N): ");
    scanf(" %c", &option); // Read a character from the user and store it in option
    printf("your option is: %c\n", option); // Print the option



    return 0; // Return 0 to indicate successful execution
}