#include <stdio.h>
int main()
{
float marks, attendance;

printf("Ateendace percentage;\n");
scanf("%f",&attendance);

printf("average marks");
scanf("%f",&marks);

if(attendance>=85 &&marks>=40)
{printf("Congratulations, you are eligible for the final exam");}

else
{printf("Unfortunately, you are not eligible for the final exam");}





return 0;    
}