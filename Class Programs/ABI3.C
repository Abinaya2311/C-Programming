#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
clrscr();
printf("Enter any number: ");
scanf("%d", &n);
printf("Natural numbers till %d: \n", n);
for(i=1; i<=n; i++)
{
printf("%d\n", i);
}
getch();
return 0;
}