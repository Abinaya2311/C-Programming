#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,flag=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a==0||a==1)
	{
		flag=1;
	}
	for(i=2;i<=a/2;++i)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Prime number");
	}
	else
	{
		printf("Composite number");
	}
	return 0;
}
