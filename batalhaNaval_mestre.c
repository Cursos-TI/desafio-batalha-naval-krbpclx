#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3
#define NAVIO_TRIANGULO_1 3
#define NAVIO_TRIANGULO_2 1
#define NAVIO_TRIANGULO_3 5
#define NAVIO_CRUZ_1_3 1
#define NAVIO_CRUZ_2 5
#define NAVIO_OCTAEDRO_1_3 1
#define NAVIO_OCTAEDRO_2 3

int main() {
    //Entrada de dados, criação do tabuleiro e os navios, e cada cada dos navios de forma geometrica.
    char linha[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS] = {0};
    int navio_triangulo[NAVIO_TRIANGULO_1] = {3,3,3};
    int navio_triangulo2[NAVIO_TRIANGULO_2] = {3};
    int navio_triangulo3[NAVIO_TRIANGULO_3] = {3,3,3,3,3};
    int navio_cruz1[NAVIO_CRUZ_1_3] = {2};
    int navio_cruz2[NAVIO_CRUZ_2] = {2,2,2,2,2};
    int navio_cruz3[NAVIO_CRUZ_1_3] = {2};
    int navio_octaedro1[NAVIO_OCTAEDRO_1_3] = {1};
    int navio_octaedro2[NAVIO_OCTAEDRO_2] = {1,1,1};
    int navio_octaedro3[NAVIO_OCTAEDRO_1_3] = {1};
   

    // Entrada da localização dos navios no tabuleiro e dos navios geometricos.

    // TRIANGULO = 3
    for (int nt = 0; nt < NAVIO_TRIANGULO_1; nt++){
        for (int nt2 = 0; nt2 < NAVIO_TRIANGULO_2; nt2++){
            tabuleiro[0][3 + nt2] = navio_triangulo2[nt2];
        }
        tabuleiro[1][2 + nt] = navio_triangulo[nt];
    }

    for (int nt3 = 0; nt3 < NAVIO_TRIANGULO_3; nt3++){
        tabuleiro[2][1 + nt3] = navio_triangulo3[nt3];
    }

    //CRUZ = 2
    for (int c1 = 0; c1 < NAVIO_CRUZ_1_3; c1++){
        for (int c2 = 0; c2 < NAVIO_CRUZ_2; c2++){
            tabuleiro[5][0 + c2] = navio_cruz2[c2];
        }
        tabuleiro[4][2 + c1] = navio_cruz1[c1];
    }

    for (int c3 = 0; c3 < NAVIO_CRUZ_1_3; c3++){
        tabuleiro[6][2 + c3] = navio_cruz3[c3];
    }


    //OCTAEDRO = 1
    for (int oc1 = 0; oc1 < NAVIO_OCTAEDRO_1_3; oc1++){
        for (int oc2 = 0; oc2 < NAVIO_OCTAEDRO_2; oc2++){
            tabuleiro[8][5 + oc2] = navio_octaedro2[oc2];
        }
        tabuleiro[7][6 + oc1] = navio_octaedro1[oc1];
    }

    for (int oc3 = 0; oc3 < NAVIO_OCTAEDRO_1_3; oc3++){
        tabuleiro[9][6 + oc3] = navio_octaedro3[oc3];
    }

    // FIM DO INSERIMENTO DOS NAVIOS


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