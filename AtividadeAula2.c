#include <stdio.h>
#include <stdlib.h>
int main(){
    system ("clear");
    float vha, aulas, liq;
    printf("Qual o valor da hora/aula? \n");
    scanf("%f", &vha);
    printf("\nQuantas aulas foram ministradas no dia? \n");
    scanf("%f", &aulas);
    aulas=(vha*3);
    liq=((aulas*30)-(aulas*0.08));
    printf("O seu salário liquido será de %.2f\n", liq);

    return 0;



}