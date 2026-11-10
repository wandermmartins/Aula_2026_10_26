// Saudação baseada na hora do dia
// Bom dia, boa tarde, boa noite e boa madrugada

#include <stdio.h>


int main() {
    int hora;

    printf("Digite a hora atual (0-23): ");
    scanf("%d", &hora);

    if (hora < 12) { 
        printf("Bom dia!\n"); 
    } else if (hora < 18) { 
        printf("Boa tarde!\n"); 
    } else { 
        printf("Boa noite!\n"); 
    }
    if (hora < 6) {
        printf("Boa madrugada!\n");
    }


    return 0;
}