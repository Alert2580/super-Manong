#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, s;
	printf("请输入三角形三边边长\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)//判断三角形是否成立
	{
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
				printf("该三角形为直角三角形");
			else if (a * a + b * b > c * c && a * a + c * c > b * b && b * b + c * c > a * a)
				printf("该三角形为锐角三角形");
			else 
				printf("该三角形为钝角三角形");
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));//三角形面积公式
		printf("a=%.2f,b=%.2f,c=%.2f\n", a, b, c);
		printf("面积为s=%.4f\n", s);
	}
	else printf("这三条边无法构成三角形");
}