#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, s;
	printf("���������������߱߳�\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)//�ж��������Ƿ����
	{
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
				printf("��������Ϊֱ��������");
			else if (a * a + b * b > c * c && a * a + c * c > b * b && b * b + c * c > a * a)
				printf("��������Ϊ���������");
			else 
				printf("��������Ϊ�۽�������");
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));//�����������ʽ
		printf("a=%.2f,b=%.2f,c=%.2f\n", a, b, c);
		printf("���Ϊs=%.4f\n", s);
	}
	else printf("���������޷�����������");
}