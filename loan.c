/*NAME:IGNATIUS KARANJA
REGISTRATION NUMBER:CT100/G/30640/26
DESCRIPTION:LOAN ELIGIBILITY CHECKER*/

#include <stdio.h>
int main() {
int age;
double annual_income; 

printf("dear coustomer please input your age in years\n");
scanf("%d",&age);

printf("dear coustomer please input your annual income in KES");
scanf("%lf",&annual_income);

if (age>=21 &&annual_income>=21000) {
printf("Congratulations you qualify for the loan");
}

else {

printf("Unfortunately, we are unable to offer you a lone at this time");
    /* code */
}

    return 0;
}