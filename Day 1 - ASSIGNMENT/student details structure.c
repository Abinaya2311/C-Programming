#include<stdio.h>
#include<conio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
}s[10];
int main()
{
	int i;
	printf("Enter details for 3 students:\n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter roll number\n");
		scanf("%d",&s[i].roll);
		printf("Enter marks: ");
		scanf("%f",&s[i].marks);
		printf("\n");
	}
	printf("Displaying details for the students\n\n");
	for(i=0;i<3;i++)
	{
		printf("\nRoll number: %d\n", s[i].roll);
		printf("Name: ");
		puts(s[i].name);
		printf("Marks %.1f", s[i].marks);
		printf("\n");
	}
	getch();
	return 0;
}
