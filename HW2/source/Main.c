#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	printf("input three integer\n");
	scanf("%d %d %d", &a,&b,&c);
	if (a > b && a>c)
	{
		printf("Max=%d\n",a);
	}
	if (a < b && a < c)
	{
		printf("Min=%d\n", a);
	}
	if (b > a && b > c)
	{
		printf("Max=%d\n", b);
	}
	if (b < a && b < c)
	{
		printf("Min=%d\n", b);
	}
	if (c > b && c > a)
	{
		printf("Max=%d\n", c);
	}
	if (c < b && c < a)
	{
		printf("Min=%d\n", c);
	}
}