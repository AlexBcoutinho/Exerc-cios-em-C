#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float altura, piM, piF;
    char sexo;
    printf("Digite sua altura, e após dar enter, digite seu sexo, para masculino (M) ou (m), e para feminino (F) ou (f): ");
    scanf("%f %c", &altura, &sexo);
    piM = (72.7 * altura) - 58;
    piF = (62.1 * altura) - 44.7;

    if (sexo == 'm' || sexo== 'M')
    {

        printf("\nSeu peso ideal é: %.2f\n ", piM);
    }

    else if (sexo == 'f' || sexo=='F')
    {
        printf("\nSeu peso ideal é: %.2f\n", piF);
    }


    return 0;
}