#include <stdio.h>

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Bispo se move 1 casa na diagonal superior direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    for (int i = 0; i < passos; i++) {
        printf("Torre se move 1 casa para a direita\n");
    }
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha se move 1 casa para a esquerda\n");
    moverRainha(passos - 1);
}

void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cavalo se move 1 casa para baixo\n");
        if (i == 1) {
            for (int j = 0; j < 1; j++) {
                printf("Cavalo se move 1 casa para a direita\n");
            }
        }
    }
}

void moverCavaloAvancado() {
    int movimentos = 2;

    for (int i = 0; i < movimentos; i++) {
        printf("Cavalo se move 1 casa para baixo\n");

        for (int j = 0; j < movimentos; j++) {
            if (j == 1) {
                printf("Cavalo se move 1 casa para a direita (movimento L)\n");
                continue;
            }
        }
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    printf("Movimentação da Torre:\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

    printf("Movimentação do Cavalo em L:\n");
    moverCavalo();
    printf("\n");

    printf("Movimentação Avançada do Cavalo:\n");
    moverCavaloAvancado();
    printf("\n");

    return 0;
}
