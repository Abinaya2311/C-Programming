#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i;
	printf("Enter the month (in number): ");
	scanf("%d", &a);
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	{
		for(i=1; i<=31; i++)
		{
			printf("%d ",i);
		}
	}
	else if(a==4||a==6||a==9||a==11)
	{
		for(i=1; i<=30; i++)
		{
			printf("%d ",i);
		}
	}
	else if(a==2)
	{
		for(i=1; i<=28; i++)
		{
			printf("%d ",i);
		}
	}
	else
	{
		printf("Invalid month");
	}
	return 0;
}

