#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    // Criação do tabuleiro 10x10. Inicialmente, todos os espaços estão vazios (0).
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Navio vertical: tamanho 3
    // Posição inicial: (2, 3)
    int navio_vertical_x = 2;
    int navio_vertical_y = 3;
    int tamanho_navio_vertical = 3;

    // Posicionamento do navio vertical
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        // Aumenta a coordenada X para colocar o navio na vertical
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 1;
    }

    // Navio horizontal: tamanho 4
    // Posição inicial: (5, 1)
    int navio_horizontal_x = 5;
    int navio_horizontal_y = 1;
    int tamanho_navio_horizontal = 4;

    // Posicionamento do navio horizontal
    for (int j = 0; j < tamanho_navio_horizontal; j++) {
        // Aumenta a coordenada Y para colocar o navio na horizontal
        tabuleiro[navio_horizontal_x][navio_horizontal_y + j] = 1;
    }

    // Exibição do tabuleiro e das coordenadas dos navios
    printf("--- Coordenadas dos Navios ---\n");
    
    // Exibe as coordenadas do navio vertical
    printf("Navio Vertical:\n");
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navio_vertical_x + i, navio_vertical_y);
    }
    
    // Exibe as coordenadas do navio horizontal
    printf("\nNavio Horizontal:\n");
    for (int j = 0; j < tamanho_navio_horizontal; j++) {
        printf("Parte %d: (%d, %d)\n", j + 1, navio_horizontal_x, navio_horizontal_y + j);
    }
    
    // Opcional: Exibir o tabuleiro completo para visualização
    printf("\n--- Visualizacao do Tabuleiro (1 = navio) ---\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}