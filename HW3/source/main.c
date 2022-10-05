#include<stdio.h>

int main()
{
	int a;
	printf("input one integer output odd or even\n");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("even");
	}
	if (a % 2 == 1)
	{
		printf("odd");
	}
}