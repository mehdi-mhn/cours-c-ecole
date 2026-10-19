#include 

int main()
{
    int d1;
    int d2;
    int d3;

    printf("--- Deux des (somme = 8) ---\n");
    d1 = 1;
    while (d1 <= 6)
    {
        d2 = 1;
        while (d2 <= 6)
        {
            if (d1 + d2 == 8)
            {
                printf("%d + %d = 8\n", d1, d2);
            }
            d2 = d2 + 1;
        }
        d1 = d1 + 1;
    }

    printf("\n--- Trois des (somme = 10) ---\n");
    d1 = 1;
    while (d1 <= 6)
    {
        d2 = 1;
        while (d2 <= 6)
        {
            d3 = 1;
            while (d3 <= 6)
            {
                if (d1 + d2 + d3 == 10)
                {
                    printf("%d + %d + %d = 10\n", d1, d2, d3);
                }
                d3 = d3 + 1;
            }
            d2 = d2 + 1;
        }
        d1 = d1 + 1;
    }

    return 0;
}