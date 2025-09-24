#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LIN 3
#define COL 5

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int i, j;

    int cone[LIN][COL] = {0,0,0,0,0,
                         0,0,0,0,0,
                         0,0,0,0,0};

    int octa[3][5] = {0,0,0,0,0,
                         0,0,0,0,0,
                         0,0,0,0,0};

    int cruz[3][5]= {0,0,0,0,0,
                         0,0,0,0,0,
                         0,0,0,0,0};

    // --- CONE ---
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            }
        }
    }

    // --- OCTAEDRO ---

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if ( (i == 0 && j == 2) ||
                 (i == 1 && j >= 1 && j <= 3) ||
                 (i == 2 && j == 2) ) {
                octa[i][j] = 1;
            }
        }
    }

    // --- CRUZ ---
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (i == 1 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }

    // --- Impressão ---
    printf("Exibindo Cone:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Exibindo Octaedro:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", octa[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Exibindo Cruz:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    

    return 0;
}
