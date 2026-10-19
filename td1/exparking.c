#include <stdio.h>

int main()
{
    float nb_h;
    float prix;

    printf("Donnez le nombre d'heures passees dans le parking : ");
    scanf("%f", &nb_h);

    if (nb_h < 1)
    {
        prix = nb_h * 3.0;
    }
    else
    {
        if (nb_h < 10)
        {
            prix = (1.0 * 3.0) + ((nb_h - 1.0) * 2.5);
        }
        else
        {
            prix = (1.0 * 3.0) + (9.0 * 2.5) + ((nb_h - 10.0) * 2.0);
        }
    }

    printf("Le montant a payer est de %.2f euros.\n", prix);
    return 0;
}