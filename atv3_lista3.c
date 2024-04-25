#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int distancia;
    float consumo, tipo;
    printf("Qual a distância em KM a ser percorrida na viagem?");
    scanf("%d", &distancia);
    printf("\nEm qual o tipo do veículo será feita a viagem ?");
    scanf("%f", &tipo);

    if (tipo == 1)
    {
        consumo = distancia / 8;
        printf("\nO consumo estimado de combustivel para essa viajem é de: %.2f L\n", consumo);
    }
    else if (tipo == 2)
    {
        consumo = distancia / 9;
        printf("\nO consumo estimado de combustivel para essa viajem é de: %.2f L\n", consumo);
    }
    else if (tipo == 3)
      {
        consumo = distancia / 12;
        printf("\nO consumo estimado de combustivel para essa viajem é de: %.2f L\n", consumo);
      }

    return 0;
}