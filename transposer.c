#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

void transposer_matrice(int li, int co, int A[li][co], int T[li][co])
{
    for (int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            T[j][i] = A[i][j];
        }
    }
}
