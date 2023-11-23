#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int b = a / 100, c = a % 100;
	int d = c / 10, e = c % 10;
	int f = e * 100 + d * 10 + b;
	printf("%d", f);
	return 0;
}