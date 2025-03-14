#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Aluno
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    // Alocação dinâmica para um aluno
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Entrada de dados do aluno
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &aluno->faltas);
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);

    // Exibir os dados do aluno
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);
    
    // Verificar se foi aprovado
    if (aluno->nota >= 6.0 && aluno->faltas < 10) {
        printf("Status: Aprovado!\n");
    } else {
        printf("Status: Reprovado!\n");
    }

    // Liberar memória alocada
    free(aluno);
    
    return 0;
}
