#include <stdio.h>

int main()
{
    int n;
    int i;
    float temp;
    float somme;
    float moyenne;

    printf("Combien de temperatures a relever ? ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Aucune valeur");
    }
else
{

    somme = 0.0;
    i = 0;
    while (i < n)
    {
        printf("Entrez la temperature : ");
        scanf("%f", &temp);
        somme = somme + temp;
        i = i + 1;
    }
}
    moyenne = somme / n;
    printf("La moyenne des temperatures est : %.2f\n", moyenne);

    return 0;
}