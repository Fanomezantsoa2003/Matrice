#include <stdio.h>
#include <stdlib.h>

int main()
{
    int li;
    int co;

    printf("entrer le nombre de ligne:");
    scanf("%d", &li);
    printf("entrer le nombre de colonne:");
    scanf("%d", &co);

    int A[li][co];
    int T[li][co];

    //User input
    for (int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            printf("A(%d, %d): ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Votre matrice:\n");

    for (int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    //Transposition
    printf("Matrice transposée: \n")
    for (int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
