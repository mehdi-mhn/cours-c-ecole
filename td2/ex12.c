#include 

int main()
{
    int min;
    int max;
    int proposition;
    int reponse;

    min = 0;
    max = 100;
    reponse = -1;

    printf("Pensez a un nombre entre 0 et 100.\n");

    while (reponse != 0)
    {
        proposition = (min + max) / 2;
        printf("Est-ce %d ? (1: Trop petit, 2: Trop grand, 0: Gagne) : ", proposition);
        scanf("%d", &reponse);

        if (reponse == 1)
        {
            min = proposition + 1;
        }
        else
        {
            if (reponse == 2)
            {
                max = proposition - 1;
            }
        }
    }

    printf("Nombre trouve !\n");

    return 0;
}