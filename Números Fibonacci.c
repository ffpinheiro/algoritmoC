#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade,i,numero1,numero2, numeroAux;
	printf("Digite ate quantos numero exibidos: ");
	scanf("%d",&quantidade);
	i = 1;
	numero1 = 1;
	numero2 = 1;
	while(quantidade >= i){
        printf("%d\n",numero1);
        numeroAux = numero2;
        numero2 = numero2 + numero1;
        numero1 = numeroAux;
        i++;
	}
    printf("Fim do programa\n");
    return 0;
}

