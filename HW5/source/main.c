#include<stdio.h>

int main()
{
	int a,b;
	printf("input two integers�ݲĤ@�ӿ�J�O�_���ĤG�Ӫ�����\n");
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