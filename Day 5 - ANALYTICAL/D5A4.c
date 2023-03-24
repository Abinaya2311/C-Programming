#include <stdio.h>
int main() 
{
  const int a = 5;
  int *ptr = (int *)&a;
  printf("Original value of a: %d\n", a);
  *ptr = 10;
  printf("Modified value of a: %d\n", a);
  return 0;
}
