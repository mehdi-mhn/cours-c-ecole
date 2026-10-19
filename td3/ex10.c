#include <stdio.h>
#include <math.h>

int main()
{
    int nl, nc, i, j, CA;
    int matrice[10][4]; /* 10 représentants, 4 trimestres */

    nl = 10;
    nc = 4;

    /* 1. Saisie de la matrice */
    i = 0;
    while (i < nl) 
    {
        j = 0;
        while (j < nc) 
        {
            printf("Representant %d, Trimestre %d : ", i, j);
            scanf("%d", &matrice[i][j]);
            j = j + 1;
        }
        i = i + 1;
    }

    /* 2. CA annuel de chaque représentant (somme sur les colonnes pour chaque ligne) */
    i = 0;
    while (i < nl) 
    {
        CA = 0;
        j = 0;
        while (j < nc) 
        {
            CA = CA + matrice[i][j];
            j = j + 1;
        }
        printf("CA annuel du representant %d : %d\n", i, CA);
        i = i + 1;
    }

    /* 3. CA total de l'entreprise par trimestre (somme sur les lignes pour chaque colonne) */
    j = 0;
    while (j < nc) 
    {
        CA = 0;
        i = 0;
        while (i < nl) 
        {
            CA = CA + matrice[i][j];
            i = i + 1;
        }
        printf("CA du trimestre %d : %d\n", j, CA);
        j = j + 1;
    }

    /* 4. CA global de l'entreprise sur toute l'année */
    CA = 0;
    i = 0;
    while (i < nl) 
    {
        j = 0;
        while (j < nc) 
        {
            CA = CA + matrice[i][j];
            j = j + 1;
        }
        i = i + 1;
    }
    printf("CA annuel total de l'entreprise : %d\n", CA);

    return 0; 
}