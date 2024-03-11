#include <stdio.h>

int main()
{
    int v, i, tabuada;
    i = 0;
    tabuada = 0;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &v);

    for (i = 1; i <= 10; i++) {
        tabuada = i * v;
        printf("%d x %d = %d\n", v, i, tabuada);
    }


    return 0;
}
