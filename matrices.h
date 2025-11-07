#ifndef MATRICES_H
#define MATRICES_H

void transposer_matrice(int li, int co, int A[li][co], int T[co][li]);
void produit_matrice(int lA, int cA, int cB, int A[lA][cA], int B[cA][cB], int C[lA][cB]);

#endif
