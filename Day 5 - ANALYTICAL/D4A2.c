#include <stdio.h>
struct student 
{
  int number;
  int grade;
};

int main() {
  int n, i;
  int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  struct student s[n];
  for (i = 0; i < n; i++) 
  {
    printf("Enter student number and grade for student %d: ", i+1);
    scanf("%d %d", &s[i].number, &s[i].grade);
  }

  for (i = 0; i < n; i++) 
  {
    if (s[i].grade >= 90 && s[i].grade <= 100) 
	{
      countA++;
    }
    else if (s[i].grade >= 78 && s[i].grade <= 89) 
	{
      countB++;
    }
    else if (s[i].grade >= 65 && s[i].grade <= 77)
	{
      countC++;
    }
    else if (s[i].grade >= 50 && s[i].grade <= 64)
	{
      countD++;
    }
    else 
	{
      countF++;
    }
  }
  printf("Student Number\tGrade\n");
  for (i = 0; i < n; i++) 
  {
    printf("%d\t\t%d\n", s[i].number, s[i].grade);
  }
  printf("Total A's: %d\n", countA);
  printf("Total B's: %d\n", countB);
  printf("Total C's: %d\n", countC);
  printf("Total D's: %d\n", countD);
  printf("Total F's: %d\n", countF);

  return 0;
}

