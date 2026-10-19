#include <stdio.h>
int main()
{
    int i,cpt;
    i=0;
    cpt=0;
    while(cpt<30)
    {
        printf("%d - ",i);
        cpt=cpt+1;
        i=i+2;
    }
    printf("\n");
    return 0;
}