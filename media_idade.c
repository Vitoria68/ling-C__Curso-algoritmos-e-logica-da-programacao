#include <stdio.h>


int main()
{
    int idade, cont, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    while (idade >= 0){
    cont = cont + 1;
    soma = soma + idade;
    scanf("%d", &idade);
    }

    if (cont == 0) {
        printf("IMPOSSIVEL CALCULAR");
    }
    else {
     media = (double)soma / cont;
     printf("MEDIA = %.2lf\n", media);
    }

 return 0;
}
