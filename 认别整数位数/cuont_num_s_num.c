#include <stdio.h>
int main()
{
	int a = 0,n=1;
	scanf_s("%d", &a);
	int b = a / 10;
	while (b > 0)
	{
		b /= 10;
		n++;
	}
	printf("%d", n);
	return 0;
}