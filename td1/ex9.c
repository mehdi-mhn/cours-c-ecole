#include <stdio.h>
int main()
{
int a,b;
printf("Tapez un nombre : ");
scanf("%d",&a);
printf("Tapez un autre nombre : ");
scanf("%d",&b);
if (a>b)
{
    printf("%d est plus grand que %d.\n",a,b);
}
else 
{
if (b>a)
{
     printf("%d est plus grand que %d.\n",b,a);
}
else
{
    printf("Vos nombres sont égaux.\n");
}
}
return 0;
}