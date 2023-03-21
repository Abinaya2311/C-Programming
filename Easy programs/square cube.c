#include<stdio.h>
#include<conio.h>
int main()
{
float a,s,c;
clrscr();
printf("Enter a number: ");
scanf("%f",&a);
s=a*a;
c=a*a*a;
printf("\nSquare: %f",s);
printf("\nCube: %f",c);
getch();
return 0;
}
