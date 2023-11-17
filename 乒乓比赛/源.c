#include<stdio.h>
#include<string.h>
int main()
{
	int a[50000], i,num=0,h=0,s=0;
	scanf_s("%s", &a);
	for (i = 0; i < 50000; i++)
	{
		if (a[i] == 'E')
		{
		
			num = i;
			break;
		}
	}
	for (i = 0; i <= num; i++)
	{
		if (a[i] == 'W')
		{
			h++;
		}
		if (a[i] == 'L')
		{
			s++;
		}
		if (h + s == 11)
		{
			break;
		}
	}
	printf("%d %d", h, s);
	return 0;
}