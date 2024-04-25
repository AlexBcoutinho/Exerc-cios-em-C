#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float distancia, litros, vel, tempo;

    printf("Qual a distância entre as cidades? ");
    scanf("%f", &distancia);
    printf("\nQual o tempo gasto em horas na viagem?\n ");
    scanf("%f", &tempo);
    printf("\nQual a velocidade média mantida durante esse percurso? \n");
    scanf("%f", &vel);
    distancia = tempo * vel;
    litros = distancia / 12;
    printf("\nA quantidade de litros de combustível usada nesta viagem foi de: %.2f L\n ", litros);
    return 0;
}