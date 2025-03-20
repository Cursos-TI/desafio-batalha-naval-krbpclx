#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main() {
    //Entrada de dados, criação do tabuleiro e os navios
    char linha[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS] = {0};
    int navio_horizontal[NAVIO] = {3,3,3};
    int navio_vertical[NAVIO] = {3,3,3};
    int navio_diagonal1[NAVIO] = {3,3,3};
    int navio_diagonal2[NAVIO] = {3,3,3};

    // Entrada da localização dos navios no tabuleiro
    for (int nh = 0; nh < NAVIO; nh++){
        for(int nv = 0; nv < NAVIO; nv++){
            tabuleiro[5 + nv][7] = navio_vertical[nv];
        }
        tabuleiro[5][2 + nh] = navio_horizontal[nh];
    }
    // Entrada da localização dos navios em diagonal no tabuleiro

    for(int nd = 0; nd < NAVIO; nd++){
        for (int nd2 = 0; nd2 < NAVIO; nd2++){
            tabuleiro[3 - nd2][6 + nd2] = navio_diagonal2[nd2];
        }
        tabuleiro[1 + nd][3 + nd] = navio_diagonal1[nd];
    }

    // Exibição do tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for(int l = 0; l < LINHAS; l++){
        printf("%c ", linha[l]);
    }
        printf("\n");
    
        for (int v = 0; v < LINHAS; v++) {
            printf("%2.d ", v + 1);     
        for (int h = 0; h < COLUNAS; h++){
            printf("%d ", tabuleiro[v][h]);
            }
            printf("\n");
        }   
        
    
    return 0;
}