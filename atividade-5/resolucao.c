#include <stdio.h>

int main(){

    /*a) Vetor em C:
    Um vetor é uma sequência de elementos do mesmo tipo, armazenados de forma contínua na memória, e acessados por índices.

    Exemplo de uso:*/

    int numeros[3] = {10, 20, 30};
    printf("%d\n", numeros[0]); // Acessa o primeiro elemento (10).
    printf("%d\n", numeros[1]); // Acessa o segundo elemento (20).
    printf("%d\n", numeros[2]); // Acessa o terceiro elemento (30).
    

    /*Em memória, os elementos ficam lado a lado.

    b) String em C:
    Uma string é um vetor de caracteres terminado com o caractere especial \0 (nulo).

    Exemplo de uso:*/

    char nome[10] = "Carlos";
    printf("%s\n", nome);

    /*Cada letra ocupa uma posição no vetor.

    Strings podem ser manipuladas com funções como strlen (tamanho) ou strcpy (cópia).*/
}