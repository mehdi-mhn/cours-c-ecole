#include <stdio.h>
#define N 8
int main()
{
int t[N], i, flag;
printf("\nDonnez les %d valeurs : \n", n);
i=0;
while (i<N)
{
printf("Tapez la valeur de la case %d : ", i);
scanf("%d", &t[i]);
i=i+1;
}
flag=1;
i=0;
while (i<N-1 && flag==1)
{
if (t[i]>t[i+1])
{
flag=0;
}
i=i+1;
}

if (flag==0)
{
printf("\nVos valeurs ne sont pas rangées dans l'ordre croissant\n\n");
}
else
{
printf("\nVos valeurs sont rangées dans l'ordre croissant\n\n");
}
return 0;
}