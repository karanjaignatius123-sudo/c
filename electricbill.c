#include <stdio.h>

void calculateElectricBill(void) {
    int units;
    int bill;

    printf("Please input the units you have used:\n");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input.\n");
        return;
    }

    if (units < 0) {
        printf("Invalid amount of units.\n");
    } else if (units <= 100) {
        bill = units * 10;
        printf("Your electric bill is KES %d\n", bill);
    } else if (units <= 200) {
        bill = units * 15;
        printf("Your electric bill is KES %d\n", bill);
    } else {
        bill = units * 20;
        printf("Your electric bill is KES %d\n", bill);
    }
}

int main(void) {
    calculateElectricBill();
    return 0;
}