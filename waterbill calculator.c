#include <stdio.h>

int main()
{
int units;
float price;
float waterbill;

printf("How many units have you spent so far?");
scanf("%d", &units);

if(units>=1 && units<=30)
{waterbill=12.99*units;
printf("your waterbill amounts to %.2fKES",waterbill);}

else if(units>=31 && units<=60)
{waterbill=25*units;
printf("your waterbill amounts to %.2fKES",waterbill);}

else if(units>=61)
{waterbill=30*units;
printf("Your waterbill amounts to %.2fKES",waterbill);}






    return 0;
}
