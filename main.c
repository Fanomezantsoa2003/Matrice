#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

int main()
{
    int choix;

    printf("MENU\n");
    printf("1. Transposer une matrice\n");
    printf("2. Produit de deux matrices\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        int li, co;
        printf("Entrer le nombre de lignes : ");
        scanf("%d", &li);
        printf("Entrer le nombre de colonnes : ");
        scanf("%d", &co);

        int A[li][co];
        int T[co][li];

        // Saisie de la matrice A
        for (int i = 0; i < li; i++) {
            for (int j = 0; j < co; j++) {
                printf("A(%d,%d): ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        // Affichage
        printf("\nVotre matrice :\n");
        for (int i = 0; i < li; i++) {
            for (int j = 0; j < co; j++) {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }

        // Transposition
        transposer_matrice(li, co, A, T);

        printf("\nMatrice transposée :\n");
        for (int i = 0; i < co; i++) {
            for (int j = 0; j < li; j++) {
                printf("%d\t", T[i][j]);
            }
            printf("\n");
        }
    }

    else if (choix == 2) {
        int lA, cA, lB, cB;

        printf("Produit de deux matrices\n");
        printf("Entrer le nombre de lignes de A : ");
        scanf("%d", &lA);
        printf("Entrer le nombre de colonnes de A : ");
        scanf("%d", &cA);

        printf("Entrer le nombre de lignes de B : ");
        scanf("%d", &lB);
        printf("Entrer le nombre de colonnes de B : ");
        scanf("%d", &cB);

        // Vérifier compatibilité
        if (cA != lB) {
            printf("❌ Le produit est impossible : les colonnes de A doivent être égales aux lignes de B.\n");
            return 0;
        }

        int A[lA][cA];
        int B[lB][cB];
        int C[lA][cB];

        // Saisie de A
        printf("\nSaisir la matrice A :\n");
        for (int i = 0; i < lA; i++) {
            for (int j = 0; j < cA; j++) {
                printf("A(%d,%d): ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        // Saisie de B
        printf("\nSaisir la matrice B :\n");
        for (int i = 0; i < lB; i++) {
            for (int j = 0; j < cB; j++) {
                printf("B(%d,%d): ", i, j);
                scanf("%d", &B[i][j]);
            }
        }

        // Produit
        produit_matrice(lA, cA, cB, A, B, C);

        // Affichage
        printf("\nRésultat du produit A × B :\n");
        for (int i = 0; i < lA; i++) {
            for (int j = 0; j < cB; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }

    else {
        printf("Choix invalide.\n");
    }

    return 0;
}
