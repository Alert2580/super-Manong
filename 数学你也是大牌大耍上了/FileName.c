//����[a,b]����ͬʱ��x,y,z��������Ȼ��������������
#include<stdio.h>
#include<math.h>
main()
{
	int num, a, b, x, y, z,max=0,count=0;
	printf("������һ����Χ\n");
	scanf_s("%d %d", &a, &b);
	printf("��������������\n");
	scanf_s("%d %d %d", &x, &y, &z);
	for (num=a; num<=b  ; num++)
	{
		if (num % x == 0 && num % y == 0 && num % z == 0)
		{
			count++;
			max = num;
		}
	}
	printf("����������������%d��", count);
	printf("����ֵΪ%d", max);
	return 0;
}