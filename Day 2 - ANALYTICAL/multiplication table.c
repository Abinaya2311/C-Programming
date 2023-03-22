#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,i;
	printf("Enter a number");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
	{
		a=n*i;
		printf("%d x %d = %d\n",n,i,a);
	}
	return 0;
}
