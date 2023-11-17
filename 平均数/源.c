#include<stdio.h>
int main()
{
	int num, sum = 0, count = 0;
	scanf_s("%d", &num);
	while (num != -1)
	{
		sum += num;
		count++;
		scanf_s("%d", &num);
	}
	printf("%f\n", 1.0* sum / count);
	return 0;
}