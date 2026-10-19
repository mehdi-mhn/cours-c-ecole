#include <stdio.h>
int main()
{
    int h,m,s,t;
    printf("Donnez un temps en heure(s) : ");
    scanf("%d",&h);
    printf("Donnez un temps en minute(s): " );
    scanf("%d" ,&m);
    printf("Donnez un temps en seconde(s) : " );
    scanf("%d",&s);
    t = (h*3600) + (m*60) + s;
    printf("%d h %d min %d s donne %d s en secondes.\n",h,m,s,t);
    return 0;
}