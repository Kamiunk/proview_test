#include<stdio.h>
int main()
{
	int h1=0, m1=0;
	int h2=0, m2=0;
	scanf_s("%d %d", &h1, &m1);
	scanf_s("%d %d", &h2, &m2);
	double t1 = h1 + m1 / 60.0;
	double t2 = h2 + m2 / 60.0;
	double t = t2 - t1;
	int t3 = t * 60;
	int t4 = t;
	printf("时间是%d小时%d分钟", t4, t3 % 60);
}