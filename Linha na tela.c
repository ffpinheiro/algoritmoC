#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,c;
	printf("Digite : ");
	scanf("%i",&n);
	for(l=1;l<=n;l++){
        for(c=1;c<=l;c++){
            printf("%i ",c);
        }
        printf("\n");
	}
    printf("Fim do programa\n");
    return 0;
}
