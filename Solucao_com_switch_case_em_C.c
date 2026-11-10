// Ler um número inteiro de 1 a 7 e escrever o dia da semana correspondente
// Alterado para meses do ano

#include <stdio.h>

int main() {
    int numeroMes;
    const char *mes;

    printf("Digite um numero de 1 a 12: ");

    if (scanf("%d", &numeroMes) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (numeroMes) {
        case 1:
            mes = "Janeiro";
            break;
        case 2:
            mes = "Fevereiro";
            break;
        case 3:
            mes = "Marco";
            break;
        case 4:
            mes = "Abril";
            break;
        case 5:
            mes = "Maio";
            break;
        case 6:
            mes = "Junho";
            break;
        case 7:
            mes = "Julho";
            break;
        case 8:
            mes = "Agosto";
            break;
        case 9:
            mes = "Setembro";
            break;
        case 10:
            mes = "Outubro";
            break;
        case 11:
            mes = "Novembro";
            break;
        case 12:
            mes = "Dezembro";
            break;
        default:
            mes = "Numero invalido";
    }

    printf("Mes escolhido: %s\n", mes);

    return 0;
}