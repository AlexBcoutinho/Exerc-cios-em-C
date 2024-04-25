#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int acervo, descarte, reposicao, totalFitas;
    float aluguel, fatAnual, atraso, multa, valoratraso;

    printf("\nQual a quantidade do acervo? ");
    scanf("%d", &acervo);
    printf("\nQual o valor do aluguel? ");
    scanf("%f", &aluguel);
    fatAnual = ((acervo * 0.33) * 12) * aluguel;
    printf("\nO faturamento anual com aluguel das fitas é de: %.2f\n", fatAnual);
    multa = aluguel * 0.1;
    atraso = (acervo * 0.33) * 0.1;
    valoratraso = multa * atraso;
    printf("\nO valor ganho com multas por mês é de %.2f\n", valoratraso);
    descarte = (acervo * 0.02);
    reposicao = (acervo * 0.1);
    totalFitas = (acervo - descarte) + reposicao;
    printf("\nSerão descartadas por ano %d fitas\n", descarte);
    printf("\nSerão repostas por ano %d fitas\n", reposicao);
    printf("\nDesta forma teremos uma quantidade final de %d de fitas no acervo.\n", totalFitas);

    return 0;
}
