#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, i,maior,numero;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&quantidade);
    maior = 0;
    i = 1;
    while(quantidade >= i){
        printf("Digite o numero: ");
        scanf("%d",&numero);
        if(numero > maior){
            maior = numero;
        }
        i++;
    }
    printf("O maior numero recebido foi: %d\n",maior);
    printf("Fim do programa\n");
    return 0;
}

