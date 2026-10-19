#include <stdio.h>
int main()
{
int BI, BS, M, cpt, rep ;
printf("Donnez moi la borne inferieur de l'intervalle de recherche : ");
scanf("%d", &BI);
printf("Donnez-moi la borne superieur de l'intervalle de recherche : ");
scanf("%d", &BS);
M = (BI + BS) / 2;
printf("\n\nJe vous propose le nombre : %d\n\n", M);
printf("Tapez 1 si ce nombre est plus petit que celui que vous avez choisi\n");
printf("Tapez 2 si ce nombre est plus grand que celui que vous avez choisi\n");
printf("Tapez 0 si j'ai trouve !!!\n");
printf("Votre reponse : ");
scanf("%d", &rep);
cpt = 1;
while (rep != 0)
{ if (rep == 1)
{ BI = M + 1;
}
else
{ BS = M - 1;
}
M = (BI + BS) / 2;
printf("\n\nJe vous propose le nombre : %d\n\n", M);
printf("Tapez 1 si ce nombre est plus petit que celui que vous avez choisi\n");
printf("Tapez 2 si ce nombre est plus grand que celui que vous avez choisi\n");
printf("Tapez 0 si j'ai trouve !!!\n");
printf("Votre reponse : ");
scanf("%d", &rep);
cpt = cpt + 1;
}
printf("\n\nJ'ai trouvé la valeur en %d coups\n\n", cpt);
return 0;
}