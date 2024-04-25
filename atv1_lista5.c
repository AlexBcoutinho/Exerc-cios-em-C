#include <stdio.h>
#include <stdlib.h>

int main()
{
system("clear");
    const int num_alunos = 10;
    char nomes[num_alunos][100];
    float notas1[num_alunos];
    float notas2[num_alunos];
    float medias[num_alunos];

    for (int i = 0; i < num_alunos; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a primeira nota de %s: ", nomes[i]);
        scanf("%f", &notas1[i]);
        printf("Digite a segunda nota de %s: ", nomes[i]);
        scanf("%f", &notas2[i]);

        medias[i] = (3 * notas1[i] + 7 * notas2[i]) / 10;
    }

    printf("\nListagem de alunos:\n");
    printf("---------------------\n");
    for (int i = 0; i < num_alunos; i++)
    {
        printf("%s: Nota 1 = %.2f, Nota 2 = %.2f, Média = %.2f\n", nomes[i], notas1[i], notas2[i], medias[i]);
    }

    return 0;
}