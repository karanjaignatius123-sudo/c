#include <stdio.h>

int main(void)
{
    double units, water_bill;

    printf("Please input how many water units you have used.\n");
    scanf("%lf", &units);

    if (units <= 30)
    {
        water_bill = units * 20;
    }
    else if (units <= 60)
    {
        water_bill = units * 25;
    }
    else
    {
        water_bill = units * 30;
    }

    printf("Units consumed: %.2f\n", units);
    printf("Water bill: %.2f\n", water_bill);

    return 0;
}