#include <stdio.h>
int main()
{
    int a,b,s;
    printf("Tapez un entier : ");
    scanf("%d",&a);
    printf("Tapez un second entier : ");
    scanf("%d",&b);
    s = a + b;
    printf("La somme de %d + %d est %d.\n",a,b,s);
    return 0;
}