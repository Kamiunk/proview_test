#include<stdio.h>
int main()
{
	int jc(int x),n;
	scanf_s("%d", &n);
	printf("%d", jc(n));
	return 0;
}
int jc(int x)
{
	int c;
	if (x < 0)
		printf("error");
	else if (x == 1||x==0)
		c = 1;
	else
		c = jc(x - 1) * x;
	return(c);
}