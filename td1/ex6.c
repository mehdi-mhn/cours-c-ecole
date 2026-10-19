#include <stdio.h>
int main()
{
    int t,h,m,s,reste;
    printf("Donnez un temps en secondes : ");
    scanf("%d",&t);
    h=t/3600;
    reste=t%3600;
    m=reste/60;
    s=reste%60;
    printf("%d secondes correspond à %d heure(s) %d minute(s) et %d seconde(s).\n",t,h,m,s);

return 0;
}