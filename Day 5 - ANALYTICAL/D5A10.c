#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}

void add()
{
	int a,b,c;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter anther number: ");
	scanf("%d", &b);
	c=a+b;
	printf("The sum is %d", c);
}
