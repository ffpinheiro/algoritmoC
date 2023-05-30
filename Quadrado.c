#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l,c;
	printf("Digite : ");
	scanf("%d",&n);
    for(l=1;l<=n;l++){
        for(c=1;c<=n;c++){
            if(c==l){
                printf("+ ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("Fim do programa\n");
    return 0;
}

