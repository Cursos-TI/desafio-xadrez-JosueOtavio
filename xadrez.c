#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as peças

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n"); // Linha em branco para separar as peças

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n"); // Linha em branco para separar as peças

    // Movimento do Cavalo (usando for e while aninhados)
    printf("Movimento do Cavalo:\n");
    for (int l = 0; l < 2; l++) { // Move duas casas para baixo
        printf("Baixo\n");
    }
    int m = 0;
    while (m < 1) { // Move uma casa para a esquerda
        printf("Esquerda\n");
        m++;
    }

    return 0;
}
