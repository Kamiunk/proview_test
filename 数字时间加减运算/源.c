#include<stdio.h>
int main()
{
	int qt = 0, gtm = 0;
	scanf_s("%d %d", &qt,&gtm);
	int qh = qt / 100;
	int qm = qt % 100;
	int zm1 = qh * 60 + qm+gtm;
	
	int zh1= zm1/60;
	int zh = zh1 * 100;
	int zm = zm1 % 60;
	printf("%d",zh+zm);
	return 0;
}