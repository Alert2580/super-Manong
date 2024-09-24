//求在[a,b]内能同时被x,y,z整除的自然数个数及最大的数
#include<stdio.h>
#include<math.h>
main()
{
	int num, a, b, x, y, z,max=0,count=0;
	printf("请输入一个范围\n");
	scanf_s("%d %d", &a, &b);
	printf("请输入三个除数\n");
	scanf_s("%d %d %d", &x, &y, &z);
	for (num=a; num<=b  ; num++)
	{
		if (num % x == 0 && num % y == 0 && num % z == 0)
		{
			count++;
			max = num;
		}
	}
	printf("满足条件的数共有%d个", count);
	printf("最大的值为%d", max);
	return 0;
}