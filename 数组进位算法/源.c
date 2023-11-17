#include<stdio.h>
int main()
{
	int a[14]={0}, b, i;
	scanf_s("%d", &b);
	for (i = 12; i > 0; i--)
	{
		scanf_s("%d", &a[i]);

	}
	for (i = 0; i<13; i++)
	{
		a[i] =a[i]* b;
	}
	for (i = 12; i > 0; i--)
	{
		a[i - 1] += a[i] /10;
		a[i] =a[i]% 10;
	}
	for (i = 0; i < 13; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}//