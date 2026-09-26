#include <stdio.h>
int main() {

float height;
double bank_balance;
long long phone_number;

printf("What is your height? ");
scanf("%f", &height);

printf("What is your bank balance? ");
scanf("%lf", &bank_balance);

printf("What is your phone number? ");
scanf("%lld", &phone_number);

printf("Your height is %f\n", height);
printf("Your bank balance is %lf\n", bank_balance);
printf("Your phone number is %lld\n", phone_number);

return 0;
}