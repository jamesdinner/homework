#include<stdio.h>

int main()
{
	int a,b,c,d;
	float s,g;
	printf("�[�o�����H�C���ɬ����");
	printf("�@��Ѫ��`���{��=");
	scanf("%d",&a);
	printf("\n");
	printf("�T�o�@����/NT.");
	scanf("%d", &b);
	printf("\n");
	printf("�����@����/km");
	scanf("%d", &c);
	printf("\n");
	printf("�@�Ѫ������ONT.");
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
	printf("�@�Ѫ��q��O = �����O + �o�� = %0.2f\n",s);
}