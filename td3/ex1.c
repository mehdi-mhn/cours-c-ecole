#include <stdio.h>
#define n 10

int main()
{
int t[n], i;
printf("Donnez %d entiers : \n", n);
i=0;
while (i<n)
{
printf("Tapez un entier : ");
scanf("%d", &t[i]);
i=i+1;
}
i=0;
while (i<n)
{
t[i] = t[i]+1;
i=i+1;
}
printf("Voici les nouvelles valeurs : \n");
i=0;
while (i<n)
{
printf("Valeur %d : %d \n", i, t[i]);
i=i+1;
}
return 0;
}