#include <stdio.h>
#define NL 3
#define NC 2
int main()
{
int M1[NL][NC], M2[NL][NC], M3[NL][NC], i, j;

printf("\nDonnez les valeurs de la première matrice : \n");
i=0;
while (i<NL)
{
j=0;
while (j<NC)
{
printf("Tapez la valeur de la case ligne %d colonne %d : ", i, j);
scanf("%d", &M1[i][j]);
j=j+1;
}
i=i+1;
}

printf("\nDonnez les valeurs de la deuxième matrice : \n");
i=0;
while (i<NL)
{
j=0;
while (j<NC)
{
printf("Tapez la valeur de la case ligne %d colonne %d : ", i, j);
scanf("%d", &M2[i][j]);
j=j+1;
}
i=i+1;
}

i=0;
while (i<NL)
{
j=0;
while (j<NC)
{
M3[i][j]=M1[i][j]+M2[i][j];
j=j+1;
}
i=i+1;
}

printf("\nVoici la matrice 1 : \n");
i=0;
while (i<NL)
{
j=0;
while (j<NC)
{
printf("%d\t", M1[i][j]);
j=j+1;
}
printf("\n");
i=i+1;
}

printf("\nVoici la matrice 2 : \n");
i=0;
while (i<NL)
{
j=0;
while (j<NC)
{
printf("%d\t", M2[i][j]);
j=j+1;
}
printf("\n");
i=i+1;
}

printf("\nVoici la matrice qui contient la somme des deux matrices : \n");
i=0;
while (i<NL)
{
j=0;
while (j<NC)
{
printf("%d\t", M3[i][j]);
j=j+1;
}
printf("\n");
i=i+1;
}

return 0;
}