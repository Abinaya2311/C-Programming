#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,ele;
	printf("Enter array elements: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search ");
	scanf("%d", &ele);
	for(i=0;i<10;i++)
	{
		if(a[i]==ele)
		{
			printf("element found");
			return 0;
		}
	}
	printf("element not found");
}
