#include <stdio.h>

int main() {

    // Standard sintax of printf function
    printf("Hello World!\n"); // Print a string to the console
    //printf("text with formation", vaiable1, variable2, ...); // Print formatted text with variables
    printf("This is a formatted number: %d\n", 42); // Print an integer
    printf("This is a floating point number: %.2f\n", 3.1415); // Print a float with two decimal places
    printf("This is a character: %c\n", 'A'); // Print a character

    int age = 25;
    float height = 1.75;
    char option = 'Y';
    char name[20] = "Victor";

    printf("The age of %s is: %d years old.\n", name, age); // Print a string and an integer
    printf("The height is: %.2f\n", height); // Print a float in scientific notation
    printf("The option selected is: %c\n", option); // Print a character

    /*
    printf("%format1 %format2 ...\n", variable1, variable2, ...); // Print formatted text with multiple variables

    %d: Print an integer
    %i: Print an integer (same as %d)
    %f: Print a float
    %e: Print a float in scientific notation
    %c: Print a character
    %s: Print a string
    %p: Print a pointer address
    %x: Print an integer in hexadecimal format
    %o: Print an integer in octal format
    
    */


}