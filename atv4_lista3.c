#include <stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");
    int prato, sobremesa, bebida;
    int total_calorias = 0;

    printf("Qual prato deseja escolher:\n");
    printf("1. Vegetariano\n");
    printf("2. Peixe\n");
    printf("3. Frango\n");
    printf("4. Carne\n");
    scanf("%d", &prato);

    printf("Qual sobremesa deseja escolher:\n");
    printf("1. Abacaxi\n");
    printf("2. Sorvete diet\n");
    printf("3. Mousse diet\n");
    printf("4. Mousse de chocolate\n");
    scanf("%d", &sobremesa);

    printf("Qual bebida deseja escolher:\n");
    printf("1. Chá\n");
    printf("2. Suco de laranja\n");
    printf("3. Suco de melão\n");
    printf("4. Refrigerante diet\n");
    scanf("%d", &bebida);

    if (prato == 1)
    {
        total_calorias += 180;
    }
    else if (prato == 2)
    {
        total_calorias += 230;
    }
    else if (prato == 3)
    {
        total_calorias += 250;
    }
    else if (prato == 4)
    {
        total_calorias += 350;
    }

    if (sobremesa == 1)
    {
        total_calorias += 75;
    }
    else if (sobremesa == 2)
    {
        total_calorias += 110;
    }
    else if (sobremesa == 3)
    {
        total_calorias += 170;
    }
    else if (sobremesa == 4)
    {
        total_calorias += 200;
    }

    if (bebida == 1)
    {
        total_calorias += 20;
    }
    else if (bebida == 2)
    {
        total_calorias += 70;
    }
    else if (bebida == 3)
    {
        total_calorias += 100;
    }
    else if (bebida == 4)
    {
        total_calorias += 65;
    }

    printf("Total de calorias da refeição: %d calorias\n", total_calorias);

    return 0;
}
