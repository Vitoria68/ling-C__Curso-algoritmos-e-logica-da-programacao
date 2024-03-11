#include <stdio.h>

int main ()
{
    double nota1, nota2, total;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    total = nota1 + nota2;
    printf("NOTA FINAL: %.1lf\n", total);

    if (total < 60.00) {
        printf("REPROVADO");
    }
}
