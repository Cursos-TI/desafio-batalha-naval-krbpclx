#include <stdio.h>

int main() {
    //Entrada de dados, criação do tabuleiro e os navios
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    int navio_horizontal[3] = {3,3,3};
    int navio_vertical[3] = {3,3,3};

    // Entrada da localização dos navios no tabuleiro
    for (int nh = 0; nh < 3; nh++){
        for(int nv = 0; nv < 3; nv++){
            tabuleiro[5 + nv][7] = navio_vertical[nv];
        }
        tabuleiro[2][2 + nh] = navio_horizontal[nh];
    }

    // Exibição do tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for(int l = 0; l < 10; l++){
        printf("%c ", linha[l]);
    }
        printf("\n");
    
        for (int v = 0; v < 10; v++) {
            printf("%2.d ", v + 1);     
        for (int h = 0; h < 10; h++){
            printf("%d ", tabuleiro[v][h]);
            }
            printf("\n");
        }   
        
    
    return 0;
}