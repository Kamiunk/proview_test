#include<stdio.h>
int main()
{
	int a, b, i, j, count1, count2, z;
	scanf_s("%d", &z);
	for (j = 2; j <= z; j += 2)
	{
		for (a = 2; a <= j / 2; a++)
		{
			for (i = 2; i < a; i++)
			{
				count1 = 0;
				if (a % i == 0 && a != 2)
				{
					count1++;
					break;
				}
			}
			if (count1 == 0)
			{
				b = j - a;
				count2 = 0;
				for (i = 2; i < b; i++)
				{
					if (b % i == 0 && b != 2)
					{
						count2++;
						break;
					}
				}
			}
			if (count2 == 0)
			{
				printf("%d=%d+%d\n", j, a, b);
				break;
			}
		}
	}
	return 0;
}