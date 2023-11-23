#include<stdio.h>
int main()
{
	int n,m=1,i=0;
	scanf_s("%d", &n);
	for(i=1;i<=n;i++){m *= i;}
	printf("%d", m);
	return 0;
}