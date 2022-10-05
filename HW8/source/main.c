#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("input weight and high output BMI\n");
	int a;
	float b,c;
	scanf("%d %f", &a, &b);
	c = a / b/b ;
	printf("BMI=%0.2f\n", c);
	if (c < 18.5)
	{
		printf("Underweight");

	}
	if (c >= 18.5&&c<25)
	{
		printf("Normal");

	}
	if (c >= 25&&c < 30)
	{
		printf("Overweight");

	}
	if (c >=30)
	{
		printf("Obese");

	}
}