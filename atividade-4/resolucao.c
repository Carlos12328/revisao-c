#include <stdio.h>

int main() {

    int y = 5; 
    int z = 11;
    int w; 

    w = y + z;

    if (y > z) { 
        w = y * z;
    }

    printf("%d", w);

    return 0; 
}

/*
    A saída será 16 que é o valor de y + z armazenado na variável w que permaneceu inalterado, pois na estrutura condicional
    if só iria alterar o valor de w se y fosse maior que z, o que é falso
*/