#include<stdio.h>
int main()
{
	int n,m= 1;
	scanf_s("%d", &n);
	while (n != 0)
	{
		 m *= n;
		 n--;


	}
	printf("%d", m);
	return 0;
}