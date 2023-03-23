#include<stdio.h>
int main()
{
   int n, i, sum=0;

   printf("Enter a value: ");
   scanf("%d",&n);

   for(i=1; i<=n; i+=2)
   {
     printf("%d+",i);
     sum += i;
   }
   printf("\b=%d",sum);

   return 0;
}
