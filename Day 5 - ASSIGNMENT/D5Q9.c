#include <stdio.h>
int gcd(int a, int b);
int main() 
{
    int a, b, hcf;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    hcf = gcd(a, b);
    printf("The HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}

int gcd(int a, int b) 
{
    int i, hcf;
    for(i=1; i<=a && i<=b; i++) 
	{
        if(a%i==0 && b%i==0) 
		{
            hcf = i;
        }
    }
    return hcf;
}
