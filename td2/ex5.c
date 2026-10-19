#include <stdio.h>

int main()
{
    int n, p, i;
    int fact_n, fact_p, fact_np, res;

    printf("Donnez la valeur de n : ");
    scanf("%d", &n);
    printf("Donnez la valeur de p : ");
    scanf("%d", &p);

    while(n<p || p<0)
    {
    printf("Donnez la valeur de n : ");
    scanf("%d", &n);
    printf("Donnez la valeur de p : ");
    scanf("%d", &p);
    }

    fact_n = 1;
    i = 1;
    while (i <= n)
    {
        fact_n = fact_n * i;
        i = i + 1;
    }

    fact_p = 1;
    i = 1;
    while (i <= p)
    {
        fact_p = fact_p * i;
        i = i + 1;
    }

    fact_np = 1;
    i = 1;
    while (i <= (n - p))
    {
        fact_np = fact_np * i;
        i = i + 1;
    }

    res = fact_n / (fact_p * fact_np);

    printf("C(%d, %d) = %d\n", n, p, res);

    return 0;
}