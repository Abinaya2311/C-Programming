#include<stdio.h>
int main()
{
	int a,n,b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter the power: ");
	scanf("%d", &n);
	b=pow(a,n);
	printf("%d", b);
	return 0;
}
