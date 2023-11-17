#include<stdio.h>
int main()
{
	int n, m,h=1;
	scanf_s("%d", &n);
	for (int i= 2; i <= n / 2; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0 && i != 2)
			{
				h = 0;
				break;
			}
			
		}
	}
}