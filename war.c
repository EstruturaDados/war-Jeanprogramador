#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_NOME 50
#define TAM_COR 30

// Definição da struct
struct Territorio {
    char nome[TAM_NOME];
    char corExercito[TAM_COR];
    int numeroTropas;
};

int main() {

    struct Territorio territorios[MAX_TERRITORIOS];

    printf("=== Cadastro Inicial dos Territórios ===\n\n");

    // Cadastro dos territórios
    for(int i = 0; i < MAX_TERRITORIOS; i++) {

        printf("Território %d\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, TAM_NOME, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove \n

        printf("Cor do Exército: ");
        fgets(territorios[i].corExercito, TAM_COR, stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].numeroTropas);
        getchar(); // limpa o buffer

        printf("\n");
    }

    // Exibição do mapa
    printf("\n=== Estado Atual do Mapa ===\n\n");

    for(int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].corExercito);
        printf("Número de Tropas: %d\n", territorios[i].numeroTropas);
        printf("---------------------------\n");
    }

    return 0;
}
