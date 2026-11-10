//Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu e mostrar o valor a ser pago.

#include <stdio.h>

int main() {
    int minutos;
    double valor = 50.0;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos > 100) {
        valor += (minutos - 100) * 2.4;
    }

    printf("Valor a pagar: R$ %.2lf\n", valor);
    return 0;
}