#include <stdio.h>

// Constantes para movimentos das peças
const int MOV_TORRE = 5;
const int MOV_BISPO = 5;
const int MOV_RAINHA = 8;
const int CAVALO_VERTICAL = 2;  // Movimentos para cima
const int CAVALO_HORIZONTAL = 1; // Movimentos para direita

// Função recursiva para movimento da Torre
void mover_torre(int casas) {
    if (casas <= 0) return;  // Caso base
    printf("Direita\n");
    mover_torre(casas - 1);  // Chamada recursiva
}

// Função recursiva para movimento do Bispo
void mover_bispo(int casas) {
    if (casas <= 0) return;  // Caso base
    printf("Cima, Direita\n");
    mover_bispo(casas - 1);  // Chamada recursiva
}

// Função recursiva para movimento da Rainha
void mover_rainha(int casas) {
    if (casas <= 0) return;  // Caso base
    printf("Esquerda\n");
    mover_rainha(casas - 1);  // Chamada recursiva
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre (recursivo):\n");
    mover_torre(MOV_TORRE);

    // Movimento do Bispo (com loops aninhados)
    printf("\nMovimento do Bispo (loops aninhados):\n");
    for (int vertical = 0; vertical < MOV_BISPO; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha (recursivo):\n");
    mover_rainha(MOV_RAINHA);

    // Movimento do Cavalo (loops aninhados complexos)
    printf("\nMovimento do Cavalo (loops complexos):\n");
    int vertical_feito = 0;
    int horizontal_feito = 0;
    
    for (int etapa = 0; etapa < CAVALO_VERTICAL + CAVALO_HORIZONTAL; etapa++) {
        for (int passo = 0; passo < 1; passo++) {  // Loop interno para controle de direção
            
            // Executa movimentos verticais primeiro
            if (vertical_feito < CAVALO_VERTICAL) {
                printf("Cima\n");
                vertical_feito++;
                continue;  // Pula para próxima iteração
            }
            
            // Executa movimentos horizontais após completar verticais
            if (horizontal_feito < CAVALO_HORIZONTAL) {
                printf("Direita\n");
                horizontal_feito++;
                break;  // Sai do loop interno após movimento horizontal
            }
        }
    }

    return 0;
}