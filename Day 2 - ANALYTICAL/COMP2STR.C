#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100], b[100];
clrscr();
printf("Enter first string: ");
gets(a);
printf("Enter another string: ");
gets(b);
if(strcmp(a,b)==0)
{
printf("Strings are equal");
}
else
{
printf("Strings are not equal");
}
getch();
}