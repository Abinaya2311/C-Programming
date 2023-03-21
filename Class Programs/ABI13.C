#include<stdio.h>
#include<conio.h>
int main()
{
float p,r,t,si;
clrscr();
printf("Enter the principal amount: ");
scanf("%f", &p);
printf("Enter the rate: ");
scanf("%f", &r);
printf("Enter time: ");
scanf("%f", &t);
si=(p*r*t)/100;
printf("Simple Interest: %.2f",si);
getch();
return 0;
}