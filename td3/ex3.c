#include <stdio.h>
#include <math.h>

#define N 10

int main()
{
    int t[N], i, min, imin, val_cherchee, flag;
    float S, M, variance, ecartype;

    /* 1. Saisie des elements */
    printf("Donnez %d entiers : \n", N);
    i = 0;
    while (i < N)
    {
        printf("Tapez un entier : ");
        scanf("%d", &t[i]);
        i = i + 1;
    }

    /* 2. Affichage du tableau */
    printf("\nVoici les valeurs du tableau : \n");
    i = 0;
    while (i < N)
    {
        printf("Valeur %d : %d\n", i, t[i]);
        i = i + 1;
    }

    /* 3. Moyenne */
    i = 0;
    S = 0;
    while (i < N)
    {
        S = S + t[i];
        i = i + 1;
    }
    M = S / N;
    printf("\nLa moyenne des valeurs du tableau vaut %f\n", M);

    /* 4. Minimum et son rang */
    min = t[0];
    imin = 0;
    i = 1;
    while (i < N)
    {
        if (t[i] < min)
        {
            min = t[i];
            imin = i;
        }
        i = i + 1;
    }
    printf("\nLa plus petite valeur du tableau vaut %d et elle est dans la case n° %d\n", min, imin);

    /* 5. Ecart-type */
    S = 0;
    i = 0;
    while (i < N)
    {
        S = S + (t[i] - M) * (t[i] - M);
        i = i + 1;
    }
    variance = S / N;
    ecartype = sqrt(variance);
    printf("\nL'ecart type vaut : %f\n", ecartype);

    /* 6. Recherche d'une valeur */
    printf("\nDonnez un entier que vous voulez chercher dans le tableau : ");
    scanf("%d", &val_cherchee);

    i = 0;
    flag = 0;
    while (i < N && flag == 0)
    {
        if (t[i] == val_cherchee)
        {
            flag = 1;
        }
        else
        {
            i = i + 1;
        }
    }

    if (flag == 1)
    {
        printf("\nOUI, la valeur cherchee se trouve bien dans le tableau.\n");
    }
    else
    {
        printf("\nNON, la valeur cherchee ne se trouve pas dans le tableau.\n");
    }

    return 0;
}