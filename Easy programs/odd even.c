#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("Enter a number: ");
scanf("%d", &a);
if(a%2==0)
{
printf("Even number");
}
else
{
printf("Odd number");
}
getch();
return 0;
}
