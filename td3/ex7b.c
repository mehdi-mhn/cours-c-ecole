#include <stdio.h>
#define N 8
int main()
{
int t1[N], t2[N], i, j, flag, cpt1, cpt2 ;
printf("\n\nDonnez les valeurs du tableau 1: \n");
i = 0;
while (i<N)
{
printf("valeur [%d] = ", i);
scanf("%d", &t1[i]);
i = i + 1;
}
printf("\n\nDonnez les valeurs du tableau 2 : \n");
i = 0;
while (i<N)
{
printf("valeur [%d] = ", i);
scanf("%d", &t2[i]);
i = i + 1;
}
flag = 1;
i = 0;
while (i< N && flag == 1)
{
cpt1 = 0;
j = 0;
while (j<N)
{
if (t1[i] == t1[j])
{
cpt1 = cpt1 + 1;
}
j = j + 1;
}
cpt2 = 0;
j = 0;
while (j<N)
{
if (t1[i] == t2[j])
{
cpt2 = cpt2 + 1;
}
j = j + 1;
}
if (cpt1 != cpt2)
{
flag = 0;
}
i = i + 1;
}
if (flag == 0)
{
printf("\nLes tableaux ne sont pas egaux\n\n");
}
else
{
printf("\nLes tableaux sont egaux\n\n");
}
return 0;
}