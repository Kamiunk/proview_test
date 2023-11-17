#include<stdio.h>
int main()
{
	int plus(int x);
	int a;
	scanf_s("%d", &a);
	int plus(int a);
	printf("%d", plus(a));
	return 0;
}
int plus(int x)
{
	int sum = 0;
	if (x == 1)
	{
		sum = 1;
	}
	else
		sum = x + plus(x - 1);
	return (sum);
}