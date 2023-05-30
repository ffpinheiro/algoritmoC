#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indicadora,n,i,n1,n2;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);
    indicadora = 1;
    i = 1;
    printf("Digite um numero: ");
        scanf("%d",&n1);
    for(i;n>i;i++){
        printf("Digite um numero: ");
        scanf("%d",&n2);
        if(n1>n2){
            indicadora = 0;
        }
        n1 = n2;
    }
    if(indicadora == 1){
        printf("Ordem crescente\n");
    }else{
        printf("Fora de ordem crescente\n");
    }
    printf("fim do programa\n");
    return 0;
}

