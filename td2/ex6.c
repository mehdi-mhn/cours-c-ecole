#include <stdio.h>

int main()
{
    float x;
    float R;
    int n;
    int i;

    printf("Donnez la valeur de x (reel) : ");
    scanf("%f", &x);
    printf("Donnez la valeur de n (entier positif) : ");
    scanf("%d", &n);

    while(n<0)
    {
    printf("Donnez la valeur de n (entier positif) : ");
    scanf("%d", &n);
    }

    R = 1;
    i = 0;
    while (i < n)
    {
        res = res * x;
        i = i + 1;
    }

    printf("%.2f a la puissance %d = %.2f\n", x, n, R);

    return 0;
}