#include<stdio.h>
int removeelement(int* arr, int ret, int val)
{
	int scr = 0, dst = 0;
	while (scr < ret)
	{
		if (arr[scr] != val)
		{
			arr[dst] = arr[scr];
			dst++;
			scr++;
		}
		else
		{
			scr++;
		}
	}
	return dst;
}
int main()
{
	int k;
	scanf_s("%d", &k);
	int arr[] = { 1,3,4,3,7,8,9,5,6 };
	int ret = sizeof(arr) / sizeof(arr[0]);
	int m = removeelement(arr, ret, k);
	printf("%d\n", m);
}