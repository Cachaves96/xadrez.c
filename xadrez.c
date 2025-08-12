#include <stdio.h>

int main() {
    // Definindo constantes para o número de movimentos
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    // Simulando movimento da Torre (horizontal para direita) usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // Simulando movimento do Bispo (diagonal superior direita) usando WHILE
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < MOV_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Simulando movimento da Rainha (horizontal para esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOV_RAINHA);

    return 0;
}