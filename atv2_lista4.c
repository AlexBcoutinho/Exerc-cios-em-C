#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int idade;
    int menor21 = 0;
    int maior50 = 0;

    printf("Digite a idade das pessoas (para parar, digite -1):\n");

    while (1)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == -1)
        {
            break;
        }

        if (idade < 21)
        {
            menor21++;
        }
        else if (idade > 50)
        {
            maior50++;
        }
    }

    printf("\nTotal de pessoas com menos de 21 anos é: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos é: %d\n", maior50);

    return 0;
}