#include<stdio.h>
int main()
{
	int age(int a);
	printf("NO.5,age:%d\n", age(5));
	return 0;
}
int age(int x)
{
	int n;
	if (x == 1)
		n = 10;
	else
		n = age(x - 1) + 2;
	return(n);

}