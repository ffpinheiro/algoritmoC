#include <stdio.h>
#include <stdlib.h>

int main()
{
    int exp,valor;
    valor = 1;
    exp = 1;
    printf("Escolha um expoente para 2: ");
    scanf("%d",&exp);
    for(int i=1;exp>=i;i++){
        valor = valor * 2;
        printf("2^%d %d\n",i,valor);
    };
    printf("\nResultado: %d",valor);
    printf("\nfim do programa\n");
    return 0;
}

