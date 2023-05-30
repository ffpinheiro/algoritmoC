#include <stdio.h>
#include <stdlib.h>

int main()
{
    //delcarações
    char s[50];
    int palindromo = 1,i=0,j=0,tamanho=0;

    //recebimento da string
    puts("Digite uma frase");
    fgets(s,50,stdin);

    //tamanho da string
    for(tamanho=0;s[tamanho] != '\0';tamanho++);
    tamanho = tamanho - 1;

    //percorrer a string e verificar se é igual
    j = tamanho - 1;
    for(i=0;i<j;i++){
        if(s[i] == ' '){
            i++;
        }
        if(s[j] == ' '){
            j--;
        }

        if(s[i] != s[j]){
            palindromo = 0;
        }
        j--;
    }

    //imprimir resultado
    if(palindromo == 1){
        puts("Palindromo");
    }else{
        puts("NaoPalindromo");
    }

    puts("Fim do programa");
    return 0;
}

