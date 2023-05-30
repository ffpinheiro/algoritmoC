#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,indicadora;
    printf("Digite um numero: ");
    scanf("%d",&n);
    i = 2;
    indicadora = 1;
    for(i;i<n;i++){
        if(n%i == 0){
            indicadora = 0;
            break;
        }
    }
    if(indicadora == 1){
        printf("Numero primo\n");
    }else{
        printf("Numero nao primo\n");
    }
    printf("Fim do programa\n");
    return 0;
}

