#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	if(a>b && a>c)
	{
		printf("%d is the greatest", a);
	}
	else if(b>a && b>c)
	{
		printf("%d is the greatest", b);
	}
	else
	{
		printf("%d is the greatest", c);
	}
	return 0;
}
