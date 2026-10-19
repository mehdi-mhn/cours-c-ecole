#include <stdio.h>

int main()
{
    int n;
    int i;
    float temp;
    float max;

    printf("Combien de releves au total ? ");
    scanf("%d", &n);

    printf("Entrez la temperature 1 : ");
    scanf("%f", &max);

    i = 1;
    while (i < n)
    {
        printf("Entrez la temperature suivante : ");
        scanf("%f", &temp);
        if (temp > max)
        {
            max = temp;
        }
        i = i + 1;
    }

    printf("La plus haute temperature atteinte est : %.2f\n", max);

    return 0;
}