#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100];
	scanf_s("%[^\n]",a);
	for (i = 0; i <strlen(a); i++)
	{
		if (a[i] != ' ') 
		{
			a[i] = a[i] + 4;
		}
		putchar(a[i]);
	}
	printf("\n");
	printf("%s", a);
	return 0;
}