#include 

int main()
{
    int secret;
    int proposition;
    int coups;

    secret = 42;
    coups = 0;

    printf("Devinez le nombre entre 0 et 100 : ");
    scanf("%d", &proposition);
    coups = coups + 1;

    while (proposition != secret)
    {
        if (proposition < secret)
        {
            printf("TROP PETIT\n");
        }
        else
        {
            printf("TROP GRAND\n");
        }
        printf("Nouvel essai : ");
        scanf("%d", &proposition);
        coups = coups + 1;
    }

    printf("GAGNE (0) en %d coup(s) !\n", coups);

    return 0;
}