#include<stdio.h>
int main()
{
	int N, M;
	scanf_s("%d", &N);
	for (M=4; M <= N; M= M+2)
	{
		for (int i=2; i>=2&&i<= N / 2; i++)
		{
			if (i == 2 && (M - i)==2)
			{
				printf("%d=%d+%d\n", M, i, M - i);
				break;
			}
			if (i % 2 == 1 && (M - i) % 2 == 1)
			{
				printf("%d=%d+%d\n", M, i, M - i);
				break;
			}
			

		}
	}
	return 0;
}