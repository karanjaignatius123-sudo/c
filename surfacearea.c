#include <stdio.h>
#define PI 3.14159

float radius;
float height;

int main()
{
    printf("What is the radius of your cylinder?.. ");
    scanf("%f", &radius);

    printf("What is the height of your cylinder?.. ");
    scanf("%f", &height);

    float area = 2 * PI * radius * (radius + height);

    printf("The total surface area of your cylinder is %f", area);

    return 0;
}