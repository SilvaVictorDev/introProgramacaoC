#include <stdio.h>

int main(){

    int index;

    const char * nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o número do aluno que queira ver as notas... \n");
    printf("0 - Para aluno 0 \n");
    printf("1 - Para aluno 1 \n");
    printf("2 - Para aluno 2 \n");

    scanf("%d", &index);

    printf("A nota do %s são: %s, %s... \n",nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    

    return 0;
}