#include 

int main()
{
    int n;
    int ligne;
    int esp;
    int etoil;

    printf("Nombre de lignes pour le feuillage : ");
    scanf("%d", &n);

    /* 1. Le feuillage */
    ligne = 1;
    while (ligne <= n)
    {
        esp = 1;
        while (esp <= (n - ligne))
        {
            printf(" ");
            esp = esp + 1;
        }

        etoil = 1;
        while (etoil <= (2 * ligne - 1))
        {
            printf("*");
            etoil = etoil + 1;
        }
        printf("\n");
        ligne = ligne + 1;
    }

    /* 2. Le tronc (2 lignes de 3 etoiles) */
    ligne = 1;
    while (ligne <= 2)
    {
        esp = 1;
        while (esp <= (n - 2))
        {
            printf(" ");
            esp = esp + 1;
        }
        printf("***\n");
        ligne = ligne + 1;
    }

    return 0;
}