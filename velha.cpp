/**
 * \file  velha.cpp
 */

#include "velha.hpp"

/**
 * \brief Verifica a situacao do jogo da velha.
 *
 * \param velha Tabuleiro 3x3.
 * \return 1 se X venceu, 2 se O venceu, 0 caso contrario.
 */
int VerificaVelha(int velha[3][3])
{
    // Verifica linhas
    for (int i = 0; i < 3; i++) {
        if (velha[i][0] == velha[i][1] &&
            velha[i][1] == velha[i][2]) {
            if (velha[i][0] == 1) {
                return 1;
            }
            if (velha[i][0] == 2) {
                return 2;
            }
        }
    }

    // Verifica colunas
    for (int j = 0; j < 3; j++) {
        if (velha[0][j] == velha[1][j] &&
            velha[1][j] == velha[2][j]) {
            if (velha[0][j] == 1) {
                return 1;
            }
            if (velha[0][j] == 2) {
                return 2;
            }
        }
    }
    // Verifica diagonal principal
    if (velha[0][0] == velha[1][1] &&
        velha[1][1] == velha[2][2]) {
        if (velha[0][0] == 1) {
            return 1;
        }
        if (velha[0][0] == 2) {
            return 2;
        }
    }

    // Verifica diagonal secundaria
    if (velha[0][2] == velha[1][1] &&
        velha[1][1] == velha[2][0]) {
        if (velha[0][2] == 1) {
            return 1;
        }
        if (velha[0][2] == 2) {
            return 2;
        }
    }
    return 0;
}
