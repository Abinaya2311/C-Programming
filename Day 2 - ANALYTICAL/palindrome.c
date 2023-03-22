#include<stdio.h>
#include<conio.h>
int main() 
{
  
  int n, reverse = 0, remainder, temp;

  printf("Enter an integer: ");
  scanf("%d", &n);
  temp=n;
  while (n != 0) 
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if(temp==reverse)
  {
  	printf("Palindrome");
  }
  else
  {
  	printf("Not a palindrome");
  }
  return 0;
}
