#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,matriz1[3][3],matriz2[3][3],matrizResultado[3][3];
    //preenchendo matriz1
    printf("Matriz1\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz1[i][j] = i+j;
            printf("%d",matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n------\n");

    //preenchendo matriz2
    printf("Matriz2\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz2[i][j] = i+j;
            printf("%d",matriz2[i][j]);
        }
        printf("\n");
    }

    //soma das matrizes
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\n------\n");
    //impressão do resultado
    printf("MatrizResultado\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz2[i][j] = i+j;
            printf("%d",matrizResultado[i][j]);
        }
        printf("\n");
    }
    printf("Fim do programa\n");
    return 0;
}

