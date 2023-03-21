#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter a number: ");
scanf("%d", &a);
printf("Enter another number: ");
scanf("%d", &b);
printf("Enter third number: ");
scanf("%d", &c);
if(a>b && a>c)
{
printf("\n%d is the greatest", a);
}
else if(b>a && b>c)
{
printf("\n%d is the greatest", b);
}
else
{
printf("\n%d is the greatest", c);
}
getch();
return 0;
}