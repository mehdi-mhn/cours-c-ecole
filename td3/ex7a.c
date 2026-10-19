#include <stdio.h>
#define N 8
int main()
{
int t1[N], t2[N] ;
int i, flag ;
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
i = 0;
flag = 1;
while (i< N && flag == 1)
{
if (t1[i] != t2[i])
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