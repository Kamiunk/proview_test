#include<stdio.h>
int main()
{
	int m,n,count1=0, count2=0;
	scanf_s("%d", &n);
	
	while (n > 0)
	{
		if (n % 2 != 0) { n --; count2++; }
		if (n == 0)break;
		m = n % 2;
		
			if (m == 0)
			{
				count1++; 
				n /= 2;
				if (n == 1)break;
			}
		
		else
		{
			n -- ;
			count2++;
		}
	}
	printf("%d %d", count1,count2);
	return 0;
}