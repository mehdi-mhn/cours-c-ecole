#include <stdio.h>

int main()
{
    int n, cpt;

    cpt = 1;
    printf("Tapez un entier positif : ");
    scanf("%d", &n);

    while (n < 0 && cpt < 3)
    {
        cpt = cpt + 1;
        printf("Erreur ! Tapez un entier positif : ");
        scanf("%d", &n);
    }

    if (n >= 0)
    {
        printf("Bravo !\n");
    }
    else
    {
        printf("Vous avez échouez en utilisant vos 3 essais !\n");
    }

    return 0;
}