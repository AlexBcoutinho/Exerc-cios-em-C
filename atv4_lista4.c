#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int numPedidos;
    float valorTotal = 0.0;

    printf("Digite o número de pedidos: ");
    scanf("%d", &numPedidos);

    int numeros[numPedidos];
    int dias[numPedidos];
    int meses[numPedidos];
    int anos[numPedidos];
    float precosUnitarios[numPedidos];
    int quantidades[numPedidos];

    for (int i = 0; i < numPedidos; i++) {
        printf("Pedido %d:\n", i + 1);
        printf("Número do pedido: ");
        scanf("%d", &numeros[i]);
        printf("Data do pedido (dia mês ano): ");
        scanf("%d %d %d", &dias[i], &meses[i], &anos[i]);
        printf("Preço unitário: ");
        scanf("%f", &precosUnitarios[i]);
        printf("Quantidade: ");
        scanf("%d", &quantidades[i]);

        float valorPedido = precosUnitarios[i] * quantidades[i];
        valorTotal += valorPedido;
    }

    printf("\nDetalhes dos pedidos:\n");
    for (int i = 0; i < numPedidos; i++) {
        printf("Pedido %d - Número: %d, Data: %d/%d/%d, Valor Total: R$%.2f\n",
               i + 1, numeros[i], dias[i], meses[i], anos[i],
               precosUnitarios[i] * quantidades[i]);
    }
    printf("\nValor total da compra: R$%.2f\n", valorTotal);

    return 0;
}