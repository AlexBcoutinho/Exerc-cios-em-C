#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int num1, num2, result;

    printf("Digite dois numeros:");
    scanf("\n%d%d", &num1, &num2);
    result = (num1 + num2);

    if (result >= 21)
    {
        printf("O resultado é maior do que 20, entao, somando 8 ficamos com %d", result + 8);
    }
    else
    {
        printf("\nO resultado é menor ou igual a 20, então, subtraindo 5 ficamos com %d\n", result - 5);
    }

    return 0;
}