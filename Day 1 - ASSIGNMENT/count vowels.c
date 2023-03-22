#include<stdio.h>
#include<conio.h>
int main()
{
	char str[50];
	int i=0,count=0;
	printf("Enter the string\n");
	scanf("%s",str);
	while(str[i]!=NULL)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("length=%d, no of vowels=%d",i,count);
	getch();
	return 0;
}
