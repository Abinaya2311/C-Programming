#include <stdio.h>
#define MAX_EMPLOYEES 50

struct Employee 
{
    int eno;
    char ename[50];
    float salary;
};

int main() 
{
    int n, i, maxIndex = 0;
    float maxSalary = 0.0;
    struct Employee emp[MAX_EMPLOYEES];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        if (emp[i].salary > maxSalary) 
		{
            maxSalary = emp[i].salary;
            maxIndex = i;
        }
    }

    printf("\nDetails of employee with highest salary:\n");
    printf("Employee number: %d\n", emp[maxIndex].eno);
    printf("Employee name: %s\n", emp[maxIndex].ename);
    printf("Salary: %.2f\n", emp[maxIndex].salary);

    return 0;
}

