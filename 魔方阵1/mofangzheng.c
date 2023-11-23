#define ROW 3
#define COL ROW

int arr[ROW][COL] = { 0 };

int currow = 0;
int curcol = COL / 2;
arr[0][curcol] = 1;//将1放于第一行中间

for (int i = 2; i <= ROW * COL; i++)
{
	//判断上一行下一列是否存在元素
	if (arr[(currow - 1 + ROW) % ROW][(curcol + 1) % COL] != 0)
	{
		//存在元素，将位置挪位现位置的底下
		currow = (currow + 1) % ROW;
	}
	else
	{
		//不存在元素，挪位至现位置上一行下一列
		currow = (currow - 1 + ROW) % ROW;
		curcol = (curcol + 1) % COL;
	}
	arr[currow][curcol] = i;//为确定的位置赋值
}

//输出
for (int i = 0; i < ROW; i++)
{
	for (int j = 0; j < COL; j++)
	{
		printf("%-4d", arr[i][j]);
	}
	printf("\n");
}

#undef ROW
#undef COL
