/*NAME:IGNATIUS KARANJA
REG NO:CT100/G/30640/26
DESCRIPTION:THE SURFACE AREA AND VOLUME OF A CYLINDER CALCULATOR*/



#include <stdio.h>
#define PI 3.142
int main()
{
float radius;
float height;

printf("whats the radius of the cylinder you want to calculate the surface area and volume for in centimetres ?..\n");
scanf("%f",&radius);

printf("what is the height of the cyliner you want to calculate the surface area and volume cylinder for in centimetres ?..\n");
scanf("%f", &height);

float surface_area=2*PI*radius*radius+2*PI*height*radius;
float volume=PI*radius*radius*height;

printf("the surface_area for your cylinder is %.2f cm\n",surface_area);
printf("the volume for your cylinder is %.2f cm",volume);

return 0;

}