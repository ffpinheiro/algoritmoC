#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,n5,n6,jogosContados;
    jogosContados = 0;
    for(n1 = 1; n1<=55;n1++){if(n1%2==0){
        for(n2 = n1+1; n2<=56;n2++){if(n2%2!=0){
            for(n3 = n2+1; n3<=57;n3++){if(n3%2==0){
                for(n4 = n3+1;n4<=58;n4++){if(n4%2!=0){
                    for(n5 = n4+1;n5<=59;n5++){if(n5%2==0){
                        for(n6=n5+1;n6<=60;n6++){if(n6%2!=0){
                            if(n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5 && n5 < n6){
                                printf("%d   %d   %d   %d   %d   %d\n",n1,n2,n3,n4,n5,n6);
                                jogosContados += 1;
                            }
                        }}
                    }}
                }}
            }}
        }}
    }}
    printf("%d jogos contados\n",jogosContados);
    return 0;
}

