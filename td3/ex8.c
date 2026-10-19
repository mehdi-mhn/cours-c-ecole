#include <stdio.h>
#define N1 5
#define N2 3
#define N3 N1+N2
int main()
{
int t1[N1], t2[N2], t3[N3];
int i, i1, i2, i3;
printf("\n\nDonnez les valeurs du tableau 1 dans l’ordre croissant : \n");
i = 0;
while (i<N1)
{
printf("valeur [%d] = ", i);
scanf("%d", &t1[i]);
i = i + 1;
}
printf("\n\nDonnez les valeurs du tableau 2 dans l’ordre croissant : \n");
i = 0;
while (i<N2)
{
printf("valeur [%d] = ", i);
scanf("%d", &t2[i]);
i = i + 1;
}
i1 = 0;
i2 = 0;
i3 = 0;
while (i1 < N1 && i2 < N2)
{
if (t1[i1] < t2[i2])
{
t3[i3] = t1[i1];
i1 = i1 + 1;
}
else
{
t3[i3] = t2[i2];
i2 = i2 + 1;
}
i3 = i3 + 1;
}
while (i1 < N1)
{
t3[i3] = t1[i1];
i1 = i1 + 1;
i3 = i3 + 1;
}
while (i2 < N2)
{
t3[i3] = t2[i2];
i2 = i2 + 1;
i3 = i3 + 1;
}
printf("\nVoici les valeurs du tableau fusionnée : \n");
i = 0;
while (i<N3)
{
printf("Valeur %d : %d - ", i, t3[i]);
i=i+1;
}
printf("\n");