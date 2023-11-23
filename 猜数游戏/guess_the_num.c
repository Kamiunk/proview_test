#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个一到一百的数");
	do
	{
		printf("请猜猜这个数：");
		scanf_s("%d", &a);
		count++;
		if (a > num) {
			printf("你猜的数大了。");
		}
		else if (a < num); {
			printf("你猜的数小了");
		}
	} while (a != num);
	printf("恭喜你，猜中了！你一共用了%d次猜中了这个数",count);
	return 0;
}