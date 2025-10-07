// Este programa irá contruir tabuadas usando loops aninhados

// Usando o While

#include <stdio.h>

int main(){
    int i = 1;
    while (i <= 10) // Loop Externo
    {
        int j = 1; // Variável local
        while (j <= 10) // Loop interno
        {
            printf("%d\t", i * j);
            j++; // Incremento loop interno
        }
        printf("\n");
        i++; // Incremento loop externo
        
    }

// Usando Do While

    int m = 1;
    do
    {
        int n = 1; // Variável local
        do
        {
            printf("%d\t", m * n);
            n++; // Incremento loop interno
        } while (n <= 10);
        printf("\n");
        m++; // Incremento loop externo
    } while (m <= 10);

    // Usando For

    for (int a = 1; a <= 10; a++) // Loop Externo
    {
        for (int b = 1; b <= 10; b++) // Loop Interno
        {
            printf("%d\t", a * b);
        }
        printf("\n");
    }
    
    return 0;

    
}