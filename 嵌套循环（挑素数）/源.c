#include<stdio.h>
int main()
{
	int x, cnt=0;
	for (x = 2;x<100; x++)
	{

		int p = 1;
		for (int j = 2; j < x; j++)
		{
			if (x % j == 0)
			{
				
				p = 0;
				break;
			}
		}
		if (p == 1)
		{

			cnt++;
		}

	}
	printf("%d", cnt);
	return 0;


}