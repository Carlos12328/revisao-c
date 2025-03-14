#include <stdio.h> 

int main() { 

    int a = 5; 
    int b = 11;
    float c;

    scanf("%d%d", &a, &b);

    // Verifica se 'a' é maior que 'b' ou se 'a' não é maior que 0 (usando o operador de negação '!').
    if (a > b || !(a > 0)) {
        // Caso a condição seja verdadeira, divide 'b' por 'a' (divisão inteira) e converte o resultado para float.
        c = (float)(b / a); 
    } else {
        // Caso a condição seja falsa, divide 'a' por 'b' (divisão inteira) e converte o resultado para float.
        c = (float)(a / b); 
    }

    printf("%.2f\n", c);

    return 0; 
}

/* A saída do programa será o valor de C que irá depender do valor do A por causa da estrutura condicional
para assim a variavel C armazenar a divisão de B pelo A ou A pelo B*/
