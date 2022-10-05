#include<stdio.h>

int main()
{
	int a,b;
	printf("input two integers看第一個輸入是否為第二個的倍數\n");
	scanf("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("multiple");
	}
	if (a%b != 0)
	{
		printf("not multiple");
	}
}