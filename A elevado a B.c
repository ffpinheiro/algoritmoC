#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int A,B,i,acumuladora;
	printf("Digite um numero para ser a base: ");
	scanf("%d",&A);
	printf("Digite um numero para ser o expoente: ");
	scanf("%d",&B);
	acumuladora = A;
	i = 1;
	for(i;i<B;i++){
		acumuladora = acumuladora * A;
	}
	printf("%d elevado a %d vale %d\n",A,B,acumuladora);
    printf("Fim do programa\n\n");
    return 0;
}

