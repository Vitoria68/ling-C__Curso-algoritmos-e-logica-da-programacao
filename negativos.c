

#include <stdio.h>





int main()

{

    int n, i;



    printf("Quantos numeros ira digitar: ");

    scanf("%d", &n);



    int vet[n];



    for (i = 0; i < n; i++) {

        printf("Digite um numero: ");

        scanf("%d", &vet[i]);

    }



    printf("\nNegativos\n");



    for (i = 0; i < n; i++) {

        if (vet[i] < 0) {

            printf("%d\n", vet[i]);

        }

    }



    return 0;

}
