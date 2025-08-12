#include <stdio.h>

int main() {
    // Constantes para movimentos das peças básicas
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    
    // Constantes para movimento do Cavalo
    const int MOV_CAVALO_VERTICAL = 2;  // Movimentos para baixo
    const int MOV_CAVALO_HORIZONTAL = 1; // Movimentos para esquerda

    // Movimento da Torre (horizontal para direita) usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (diagonal superior direita) usando WHILE
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < MOV_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha (horizontal para esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOV_RAINHA);

    // Movimento do Cavalo usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    
    // Loop externo FOR para controlar as direções
    for (int direcao = 0; direcao < 2; direcao++) {
        int num_movimentos;
        char *direcao_str;
        
        // Define movimento e direção com base na iteração atual
        if (direcao == 0) {
            num_movimentos = MOV_CAVALO_VERTICAL;
            direcao_str = "Baixo";
        } else {
            num_movimentos = MOV_CAVALO_HORIZONTAL;
            direcao_str = "Esquerda";
        }
        
        // Loop interno WHILE para executar os movimentos
        int contador_cavalo = 0;
        while (contador_cavalo < num_movimentos) {
            printf("%s\n", direcao_str);
            contador_cavalo++;
        }
    }

    return 0;
}