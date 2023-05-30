#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,vetor1[5],vetor2[5],existeIgual;
    existeIgual = 0;
	printf("Digite os valores do primeiro vetor\n");
	//primeiro vetor
	for(i=0;i<5;i++){
        printf("Vetor 1 posicao %i ",i);
        scanf("%i",&vetor1[i]);
	}
	//segundo vetor
	printf("Digite os valores do segundo vetor\n");
	for(i=0;i<5;i++){
        printf("Vetor 2 posicao %i ",i);
        scanf("%i",&vetor2[i]);
	}
    //verificação
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(vetor2[j] == vetor1[i]){
                printf("\n posicao %d do segundo vetor é igual a %d do primeiro\n",j,i);
                existeIgual = 1;
            }
        }
    }

    if(existeIgual == 0){
        printf("Nenhum valor igual existe.");
    }
    printf("Fim do programa\n");
    return 0;
}

