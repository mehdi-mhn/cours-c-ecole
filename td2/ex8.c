#include <stdio.h>

int main()
{
    int n;
    int i;
    int flag;
    float cible;
    float temp;

    printf("Quelle temperature cherchez-vous ? ");
    scanf("%f", &cible);
    printf("Combien de releves au total ? ");
    scanf("%d", &n);

    flag = 0;
    i = 0;
    while (i < n)
    {
        printf("Entrez la temperature : ");
        scanf("%f", &temp);
        if (temp == cible)
        {
            flag = 1;
        }
        i = i + 1;
    }

    if (flag == 1)
    {
        printf("La temperature %.2f a bien ete relevee.\n", cible);
    }
    else
    {
        printf("La temperature %.2f n'a pas ete relevee.\n", cible);
    }

    return 0;
}