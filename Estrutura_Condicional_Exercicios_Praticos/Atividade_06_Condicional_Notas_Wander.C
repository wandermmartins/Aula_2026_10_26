//Enunciado: Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres. Em seguida, mostrar a nota final (soma das duas notas), com uma casa decimal. Caso a nota final seja inferior a 60.00, mostrar a mensagem “REPROVADO”.

#include <stdio.h>

int main() {
    double nota1, nota2, notaFinal;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    printf("NOTA FINAL = %.1lf\n", notaFinal);

    if (notaFinal < 60.0) {
        printf("REPROVADO\n");
    }

    else {
        printf("APROVADO\n");
    }
    
    return 0;
}