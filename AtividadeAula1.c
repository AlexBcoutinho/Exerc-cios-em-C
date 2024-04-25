#include <stdio.h>
#include <stdlib.h>

int main(){
system("clear");
float preco, desconto;

printf("Qual o valor do produto? ");
scanf("%f", &preco);

desconto=(preco-preco*0.09);
printf("O valor com desconto é: %.2f\n", desconto);

return 0;
}