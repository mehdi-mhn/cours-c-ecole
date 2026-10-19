#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Donnez une valeur : ");
    scanf("%d",&a);
    printf("Donnez une seconde valeur : ");
    scanf("%d",&b);
    printf("Donnez une troisième valeur : ");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d est le plus grand nombre.\n",a);
        }
        else
        {
            printf("%d est le plus grand nombre.\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d est le plus grand nombre.\n",b);
        }
        else
        {
            printf("%d est le plus grand nombre.\n",c);
        }
    }
return 0;
}