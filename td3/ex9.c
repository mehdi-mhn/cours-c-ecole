#include <stdio.h>
#include <math.h>

int main()
{
    int nl, nc, i, j, S;
    float moyenneFP, moyenneFT, moyenneHP, moyenneHT;
    int matrice[50][4];
    float tableau[50]; /* float conseillé pour stocker un ratio/division */

    nl = 50;
    nc = 4;

    /* 1. Saisie de la matrice */
    i = 0;
    while (i < nl) 
    {
        j = 0;
        while (j < nc) 
        {
            printf("matrice [%d][%d] : ", i, j);
            scanf("%d", &matrice[i][j]);
            j = j + 1;
        }
        i = i + 1;
    }

    /* 2. Affichage de la matrice */
    i = 0;
    while (i < nl) 
    {
        j = 0;
        while (j < nc) 
        {
            printf("%d\t", matrice[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    /* 3. Moyenne colonne 0 (Poids femme) */
    S = 0;
    i = 0;
    while (i < nl) 
    {
        S = S + matrice[i][0];
        i = i + 1;
    }
    moyenneFP = (float)S / nl;

    /* 4. Moyenne colonne 1 (Taille femme) */
    S = 0;
    i = 0;
    while (i < nl) 
    {
        S = S + matrice[i][1];
        i = i + 1;
    }
    moyenneFT = (float)S / nl;

    /* 5. Moyenne colonne 2 (Poids homme) */
    S = 0;
    i = 0;
    while (i < nl) 
    {
        S = S + matrice[i][2];
        i = i + 1;
    }
    moyenneHP = (float)S / nl;

    /* 6. Moyenne colonne 3 (Taille homme) */
    S = 0;
    i = 0;
    while (i < nl) 
    {
        S = S + matrice[i][3];
        i = i + 1;
    }
    moyenneHT = (float)S / nl;

    /* 7. Calcul du tableau (avec verification anti division par zero) */
    i = 0;
    while (i < nl) 
    {
        if (matrice[i][2] != 0) 
        {
            tableau[i] = (float)matrice[i][0] / matrice[i][2];
        } 
        else 
        {
            tableau[i] = 0; /* Valeur par défaut si division par 0 impossible */
        }
        i = i + 1;
    }

    return 0; 
}