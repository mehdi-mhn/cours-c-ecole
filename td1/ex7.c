#include <stdio.h>
int main()
{
    int h1,h2,m1,m2,s1,s2,h3,m3,s3,t1,t2,t3,reste;
    printf("Donnez un temps de départ en heure(s) : ");
    scanf("%d",&h1);
    printf("Donnez un temps en minute(s): ");
    scanf("%d" ,&m1);
    printf("Donnez un temps en seconde(s) : ");
    scanf("%d",&s1);
    printf("Donnez un temps en d'arrivé heure(s) : ");
    scanf("%d",&h2);
    printf("Donnez un temps en minute(s): ");
    scanf("%d" ,&m2);
    printf("Donnez un temps en seconde(s) : ");
    scanf("%d",&s2);
    t1 = (h1*3600) + (m1*60) + s1;
    t2 = (h2*3600) + (m2*60) + s2;
    t3 = t2 - t1;
    h3=t3/3600;
    reste=t3%3600;
    m3=reste/60;
    s3=reste%60;
    printf("Il s'est écoulé %d heure(s) , %d minute(s) et %d seconde(s) entre vos deux temps.\n",h3,m3,s3);
    return 0;
}