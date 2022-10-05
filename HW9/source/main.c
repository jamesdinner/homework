#include<stdio.h>

int main()
{
	int a,b,c,d;
	float s,g;
	printf("加油必須以每公升為單位");
	printf("一整天的總里程數=");
	scanf("%d",&a);
	printf("\n");
	printf("汽油一公升/NT.");
	scanf("%d", &b);
	printf("\n");
	printf("平均一公升/km");
	scanf("%d", &c);
	printf("\n");
	printf("一天的停車費NT.");
	scanf("%d", &d);
	printf("\n");
	if (a%c != 0)
	{
		a = a / c; 
			a++;
	}
	if (a%c == 0)
	{
		a = a / c;
	}
	g = a * b;
	s = d + g;
	printf("一天的通行費 = 停車費 + 油錢 = %0.2f\n",s);
}