#include <stdio.h>
// This program demonstrates the use of variables in C.

int main() {
    int age = 25; // Declare an integer variable named age and initialize it to 25
    int quantity = 1;
    float height = 1.75; // Declare a float variable named height and initialize it to 1.75
    double price = 19.99; // Declare a double variable named price and initialize it to 19.99
    char letter = 'A'; // Declare a char variable named initial and initialize it to 'A'
    char name[20] = "victor"; // Declare a string variable named name and initialize it to "victor"
    char initial = 'V'; // Declare a char variable named initial and initialize it to 'V'
    long population = 1000000; // Declare a long variable named population and initialize it to 1000000
    long long bigNumber = 9223372036854775807; // Declare a long long variable named bigNumber and initialize it to a large value


    // Print the values of the variables
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Initial: %c\n", initial);

    return 0;
}