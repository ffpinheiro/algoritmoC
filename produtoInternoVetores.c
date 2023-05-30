#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,vetor1[5],vetor2[5],vetorProduto[5],somatoria;
    somatoria = 0;
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
    //vetorProduto
	for(i=0;i<5;i++){
        vetorProduto[i] = vetor1[i] * vetor2[i];
	}
    //somatória
    for(i=0;i<5;i++){
        somatoria += vetorProduto[i];
    }
    //impressões
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d * %d = %d\n",vetor1[i],vetor2[i],vetorProduto[i]);
    }
    printf("\Somatoria dos produtos internos: %i\n",somatoria);
    printf("Fim do programa\n");
    return 0;
}

