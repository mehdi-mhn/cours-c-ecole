#include <stdio.h>
#define N 5

int main()
{
int t[N], t_inv[N], i, j;
printf("Donnez %d entiers : \n", N);
i=0;
while (i<N)
{
printf("Tapez un entier : ");
scanf("%d", &t[i]);
i=i+1;
}
i = 0;
j= N-1;
while (i<N)
{
t_inv[i] = t[j];
i=i+1;
j=j-1;
}
printf("\nVoici les valeurs dans le tableau inversé : \n");
i = 0;
while (i<N)
{
printf("Valeur %d : %d \n", i, t_inv[i]);
i=i+1;
}
return 0;
}