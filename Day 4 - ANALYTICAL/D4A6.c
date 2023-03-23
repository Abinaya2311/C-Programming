#include <stdio.h>

int gcd(int a, int b)
{
    int remainder;
    while (b!=0)
    {
        remainder=a%b;
        a=b;
        b=remainder;
    }
    return a;
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    int result = gcd(a,b);
    printf("GCD of %d and %d is %d\n", a,b,result);
    return 0;
}
