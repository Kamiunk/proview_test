#include<stdio.h>
#include <string.h>


int main(void)
{
	char a[15], b[13] = { "Chainmmmmmmm." };
	strncpy_s(a,15, b, sizeof(b));
	printf("%s", a);

}