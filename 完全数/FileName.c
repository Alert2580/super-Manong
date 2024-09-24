//求[2,10000]内最大的完全数及完全数的个数
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
	printf("最大的完全数为%d", max);
	printf("共有%d个完全数", count);
	return 0;
}
