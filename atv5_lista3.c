#include <stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");
    int destino;
    int totalviagem = 0;
    char volta;

    printf("\tQual o destino:\n ");
    printf("\t1. Região Norte \n");
    printf("\t2. Região Nordeste \n");
    printf("\t3. Região Centro-Oeste \n");
    printf("\t4. Região Sul \n");

    scanf("%d", &destino);
    printf("\tTerá retorno (s) ou (n)? \n");
    scanf(" %c", &volta);

    if(destino == 1 && volta=='n')
    {
        totalviagem += 500;
    }
    else if (destino == 1 && volta=='s')
    {
        totalviagem += 950;
    }
    if (destino == 2 && volta=='n')
    {
        totalviagem += 350;
    }
    else if (destino == 2 && volta=='s')
    {
        totalviagem += 650;
    }
    if (destino == 3 && volta=='n')
    {
        totalviagem += 350;
    }
    else if (destino == 3 && volta=='s')
    {
        totalviagem += 600;
    }
    if (destino == 4 && volta=='n')
    {
        totalviagem += 300;
    }
    else if (destino == 4 && volta=='s')
    {
        totalviagem += 550;
    }
    printf("O total da sua viagem será %d reais\n", totalviagem);

    return 0;
}
