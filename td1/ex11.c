#include <stdio.h>
int main()
{
    float kwh,prix;
    printf("Donnez un nombre de consommation en KWh : ");
    scanf("%f",&kwh);
    if (kwh<100)
    {
       prix=kwh*0.5;
    }
    else
    {
        if (kwh<250)
        {
            prix=(100*0.5)+((kwh-100)*0.35);
        }
        else
        {
            prix=(100*0.5)+(150*0.35)+((kwh-250)*0.2);
        }
    }
    prix=prix+25;
    printf("Vous devez payer %.2f euros.\n",prix);
    return 0;
}