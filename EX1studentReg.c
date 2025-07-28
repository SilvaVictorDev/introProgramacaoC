#include <stdio.h>
//This program make a registration of stundents

int main(){

    int age, registration;
    float height;
    char name[50];

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your height:\n");
    scanf("%f", &height);

    printf("Enter your name: \n");
    scanf("%s", &name);

    printf("Enter your registration: \n");
    scanf("%d", &registration);

    printf("Name of student: %s - Registration: %d\n", name, registration);
    printf("Age: %d - height: %.2f\n", age, height);

    return 0;

}