//Fórmula de Bhaskara com ValidaçãoPermalink

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Esta nao e uma equacao de segundo grau!\n");
    } else {
        double delta = pow(b, 2.0) - 4.0 * a * c;

        if (delta == 0) {
            double x = -b / (2.0 * a);
            printf("A raiz dupla e: %.4f\n", x);
        } else if (delta < 0) {
            printf("Esta equacao nao possui raizes reais.\n");
        } else {
            double x1 = (-b + sqrt(delta)) / (2.0 * a);
            double x2 = (-b - sqrt(delta)) / (2.0 * a);

            printf("X1 = %.4f\n", x1);
            printf("X2 = %.4f\n", x2);
        }
    }

    return 0;
}