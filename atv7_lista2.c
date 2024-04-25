#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    char municipio[15];
    int eleitores, votos;
    float percent;
    printf("\nQual o municipio? ");
    scanf("%s", municipio);
    printf("\nQual o numero de eleitores aptos de %s? ", municipio);
    scanf("%d", &eleitores);
    printf("\nQuantos votos teve o candidato mais votado em %s? ", municipio);
    scanf("%d", &votos);
   percent=eleitores/2;
    if (votos>percent)
    {
        printf("\nEm %s não teremos 2º turno, pois o candidato mais votado ultrapassou 50%% dos votos válidos", municipio);
    }
    else
    printf("Teremos 2º turno em %s, pois o candidato mais votado nao atingiu mais de 50%% dos votos válidos\n ", municipio);

        return 0;
}