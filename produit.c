#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

void produit_matrice(int lA, int cA, int cB, int A[lA][cA], int B[cA][cB], int C[lA][cB])
{
    for (int i = 0; i < lA; i++) {
        for (int j = 0; j < cB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

