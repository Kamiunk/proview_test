#include<stdio.h>
int main()
{
	int a = 1;
	double b = 2.0;
	double sum = 1.0;
	while (b <= 100)
	{
		a = -a;
		double c = a / b;
		b = b + 1;
		
		sum = sum + c;
	}
	printf("%f", sum);
	return 0;
}