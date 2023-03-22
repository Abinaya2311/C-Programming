#include<stdio.h>
int main()
{
	int n,x,i,index=-1;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			index=i;
			break;
		}
	}
	printf("The index of first occurrence of %d is %d\n",x,index);
	return 0;
}
