#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fatorial;
    printf("Digite um numero: ");
    scanf("%d", &n);
    i = n;
    fatorial = n;
    for(i;i>1;i--){
        fatorial = fatorial * (i-1);
    }
    printf("O fatorial de %d e %d\n",n,fatorial);
    printf("Fim do programa\n");
    return 0;
}

