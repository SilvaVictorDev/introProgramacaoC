// Here is a example of a C program that demonstrates modularity

#include <stdio.h>

// Generic function to input a data
void inputData(const char *prompt, void *data, size_t size) {
    printf("%s", prompt);
    fgets((char *)data, size, stdin);
}

// Generic function to calculate the average arithmetic
float calculateAverage(float a, float b) {
    return (a + b) / 2.0f;
}

// Generic function to display the data
void displayData(const char *label, const char *data) {
    printf("%s: %s\n", label, data);
}

/*

int main() {
    inputData();
    float media = calculateAverage();
    displayData();
    return 0;

}

*/