#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��һ��һ�ٵ���");
	do
	{
		printf("��²��������");
		scanf_s("%d", &a);
		count++;
		if (a > num) {
			printf("��µ������ˡ�");
		}
		else if (a < num); {
			printf("��µ���С��");
		}
	} while (a != num);
	printf("��ϲ�㣬�����ˣ���һ������%d�β����������",count);
	return 0;
}