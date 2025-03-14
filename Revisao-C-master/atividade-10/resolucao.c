#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do Aluno
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *aluno_root = NULL; // Raiz da lista encadeada

// Função para adicionar um aluno à lista
void adicionar_aluno(char nome[], int faltas, float nota) {
    aluno_t *novo = (aluno_t *)malloc(sizeof(aluno_t));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    strcpy(novo->nome, nome);
    novo->faltas = faltas;
    novo->nota = nota;
    novo->prox = NULL;

    if (aluno_root == NULL) {
        aluno_root = novo;
    } else {
        aluno_t *temp = aluno_root;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
}

// Função para exibir os alunos
void exibir_alunos() {
    aluno_t *temp = aluno_root;
    printf("\n=== Lista de Alunos ===\n");
    while (temp != NULL) {
        printf("Nome: %s", temp->nome);
        printf("Faltas: %d\n", temp->faltas);
        printf("Nota: %.2f\n", temp->nota);
        if (temp->nota >= 6.0 && temp->faltas < 10) {
            printf("Status: Aprovado!\n");
        } else {
            printf("Status: Reprovado!\n");
        }
        printf("-----------------------\n");
        temp = temp->prox;
    }
}

// Função para liberar a memória da lista
void liberar_lista() {
    aluno_t *temp;
    while (aluno_root != NULL) {
        temp = aluno_root;
        aluno_root = aluno_root->prox;
        free(temp);
    }
}

int main() {
    char nome[100];
    int faltas;
    float nota;
    int opcao;
    
    do {
        printf("\n1 - Adicionar Aluno\n2 - Exibir Alunos\n3 - Sair\nEscolha: ");
        scanf("%d", &opcao);
        getchar(); // Consumir newline do buffer

        if (opcao == 1) {
            printf("Digite o nome do aluno: ");
            fgets(nome, sizeof(nome), stdin);
            printf("Digite a quantidade de faltas: ");
            scanf("%d", &faltas);
            printf("Digite a nota do aluno: ");
            scanf("%f", &nota);
            getchar(); // Consumir newline do buffer
            adicionar_aluno(nome, faltas, nota);
        } else if (opcao == 2) {
            exibir_alunos();
        }
    } while (opcao != 3);
    
    liberar_lista(); // Liberar memória antes de sair
    return 0;
}
