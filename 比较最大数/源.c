#include<stdio.h>
#include<math.h>
int main()
{
	int a[3], e = 0, i;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", a[i]);

	}
	for (i = 0; i < 3; i++)
	{
		if (a[i] >= e)
			e = a[i];
	
	}
	printf("%d", e);
	return 0;
}
