//��[2,10000]��������ȫ������ȫ���ĸ���
#include<stdio.h>
#include<math.h>
main()
{
	int a, b, max, count = 0;
	for (a = 2; a <= 10000; a++)
	{
		int sum ;
		sum = 0;
		for (b = 1; b < a; b++)
		{
			if (a % b == 0)
				sum += b;
		}
		if (sum == a)
		{
			max = a;
			count++;
		}
	}
	printf("������ȫ��Ϊ%d", max);
	printf("����%d����ȫ��", count);
	return 0;
}
