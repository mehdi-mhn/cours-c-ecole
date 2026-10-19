#include <stdio.h>

int main()
{
    int n;
    int i;
    float somme;
    float pi;

    printf("Donnez la valeur de n : ");
    scanf("%d", &n);

    somme = 0.0;
    i = 1;
    while (i <= n)
    {
        somme = somme + (1.0 / (i * i));
        i = i + 1;
    }

    pi = sqrt(6.0 * somme);
    printf("Valeur approchee de pi pour n = %d : %f\n", n, pi);

    return 0;
}