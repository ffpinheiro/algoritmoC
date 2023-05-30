#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,matriz1[4][4],matriz2[4][4],matrizResultado[4][4],n;
    printf("Escolha numero de linhas e colunas da matriz: ");
    scanf("%d",&n);
    //preenchendo matriz1
    printf("Matriz1\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Digite o valor para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz1[i][j]);
        }
    }

    printf("------\n");

    //preenchendo matriz2
    printf("Matriz2\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Digite o valor para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz2[i][j]);
        }
    }

    //multiplicação das matrizes
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\n\n%d\n\n",matriz1[i][j]);
            printf("\n\n%d\n\n",matriz2[i][j]);
            matrizResultado[i][j] += matriz1[i][j] * matriz2[i][j];
            printf("\n\n%d\n\n",matrizResultado[i][j]);
        }
    }

    printf("------\n");
    //impressão do resultado

    //imprimindo matriz1
    printf("Matriz1\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",matriz1[i][j]);
        }
        printf("\n");
    }

    //imprimindo matriz2
    printf("Matriz2\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",matriz2[i][j]);
        }
        printf("\n");
    }

    printf("MatrizResultado\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrizResultado[i][j]);
        }
        printf("\n");
    }
    printf("Fim do programa\n");
    return 0;
}

