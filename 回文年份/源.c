#include<stdio.h>
int main()
{
	int i, j, k, n, m,a[8],b=0;
	scanf_s("%d %d", &n, &m);
	for (i = n; i <= m; i++)
	{
		for (j = 0; j < 8; j++)
		{
			i %= 10;
			a[j] = i;
		}
		for (k = 0; k < 4; k++)
		{
			if (a[k] == a[7 - k])
			{
				b++;
			}
		}
		if (b == 4)printf("%d", i);
	}
	return 0;
}