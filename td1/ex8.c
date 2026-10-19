#include <stdio.h>
int main()
{
    int a,b;
    printf("Donnez un entier pour a : ");
    scanf("%d",&a);
    printf("Donnez un entier pour b : ");
    scanf("%d",&b);
    if(a==0)
    {
        if (b==0)
        {
            printf("R est l'ensemble des solutions.\n");
        }
        else
        {
            printf("Il n'y a pas de solution.\n");
        }
    }
    else
    {
    printf("Il y'a une solution qui vaut : -%d/%d.\n",b,a);
    }
    return 0;
}