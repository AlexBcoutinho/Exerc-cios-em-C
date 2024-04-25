#include<stdio.h>
#include<stdlib.h>


int main() {
    system ("clear");
    int numTurmas = 5;
    int numAlunos = 10;
    float notas[numTurmas][numAlunos];
    float mediaTurma[numTurmas];
    float mediaGeral = 0.0;

    
    for (int i = 0; i < numTurmas; i++) {
        printf("Turma %d:\n", i + 1);
        for (int j = 0; j < numAlunos; j++) {
            printf("Nota do aluno %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    
    for (int i = 0; i < numTurmas; i++) {
        float somaNotas = 0.0;
        for (int j = 0; j < numAlunos; j++) {
            somaNotas += notas[i][j];
        }
        mediaTurma[i] = somaNotas / numAlunos;
        printf("Média da Turma %d: %.2f\n", i + 1, mediaTurma[i]);
        mediaGeral += mediaTurma[i];
    }

    // Calcular a média geral da escola
    mediaGeral /= numTurmas;
    printf("Média Geral da Escola: %.2f\n", mediaGeral);

    // Contar alunos com média superior a 7
    int totalAlunossup7 = 0;
    for (int i = 0; i < numTurmas; i++) {
        for (int j = 0; j < numAlunos; j++) {
            if (notas[i][j] > 7.0) {
                totalAlunossup7++;
            }
        }
    }
    printf("Total de Alunos com Média Superior a 7: %d\n", totalAlunossup7);

    return 0;
}