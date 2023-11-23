#include<stdio.h>
int main()
{
	int x=0,y=0,z=0;
	scanf_s("%d", &x);
	while (x>0)
	{
		y = x % 10;
		x /= 10;
		printf("%d", y);
	}
	return 0;
}