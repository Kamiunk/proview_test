#include<stdio.h>// ͷ�ļ� 
int main() // ������ 
{
	int data[] = { 26,54,93,17,71,31,44,55,20 }; // ����һ������ 
	int i, j, n = 9; // ������� 
	int min = 0;  // ������Сֵ 
	for (i = 0; i < n - 1; i++) // ���ѭ�� 
	{
		min = i; // ���ÿѭ��һ�Σ���i��ֵ����min 
		for (j = i + 1; j < n; j++)// �ڲ�ѭ�� 
		{
			if (data[min] > data[j])
			{
				min = j;
			}
		}
		int temp = data[min];  // ����λ�� 
		data[min] = data[i];
		data[i] = temp;
	}
	printf("�����ģ�");
	for (i = 0; i < n; i++) // ��������� 
	{
		printf("%d ", data[i]);
	}
	return 0;
}