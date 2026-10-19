#include <stdio.h>

int main()
{
    int n;
    int cpt;
    cpt = 0;

    printf("Tapez un entier positif : ");
    scanf("%d", &n);

    while (n < 0)
    {
        cpt = cpt + 1;
        printf("Erreur ! Tapez un entier positif : ");
        scanf("%d", &n);
    }

    printf("Nombre d'erreur(s) : %d\n", cpt);

    return 0;
}
