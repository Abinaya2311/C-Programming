#include<stdio.h>
int f(int num);
int main()
{
	int i=3, val;
	val=sizeof(f(i++))+sizeof(f(i=1))+sizeof(f(i-1));
	printf("%d%d",val,i);
	return 0;
}
int f(int num)
{
	return num*5;
}
