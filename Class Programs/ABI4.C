#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,i;
printf("Enter the current year of anniversary: ");
scanf("%d", &a);
if(a%4==0)
{
b=a+4;
printf("It is a leap year!\n");
printf("The next leap year your anniversary falls is on %d",b);
}
else
{
printf("It is not a leap year\n");
for(i=a;i<=a;i--)
{
if(i%4==0)
{
b=i;
printf("The previous leap year fell on %d",b);
break;
}
}
}
getch();
return 0;
}
