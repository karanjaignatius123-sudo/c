#include <stdio.h>

void converttocelcius(void) {
    float c, f;

    printf("Please input the Fahrenheit value for conversion:\n");
    scanf("%f", &f);

    c = (f - 32.0f) * (5.0f / 9.0f);
    printf("You have input %.2fF and it is converted to %.2fC\n", f, c);
}

int main(void) {
    converttocelcius();
    return 0;
}