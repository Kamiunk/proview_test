#include<stdio.h>
int main()
{
	int a[999];
	int i;
	for (i = 0;i<100;i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] == 0)break;
	}
	int j;
	for (j = 0; j < i-1; j++)
	{
		int k;
		for (k = 0; k < i-1 - j; k++)
		{
			int t;
			if (a[k] > a[k + 1])
			{
				t = a[k + 1];
				a[k + 1] = a[k];
				a[k] = t;
			}
		}
	}
	int l = i ;
	for (i = 0; i < l; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}