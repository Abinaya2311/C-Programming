#include<stdio.h>
int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int a,b,result;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter anther number: ");
	scanf("%d", &b);
	result=add(a,b);
	printf("The sum is: %d", result);
	return 0;
}
