#include <stdio.h>
int main()
{
    int age,age2;
    printf("Donnez votre âge : ");
    scanf("%d",&age);
    age2 = age + 10;
    printf("Dans 10 ans vous aurez %d ans.\n",age2);
    return 0;
}