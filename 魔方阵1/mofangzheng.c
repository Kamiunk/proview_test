#define ROW 3
#define COL ROW

int arr[ROW][COL] = { 0 };

int currow = 0;
int curcol = COL / 2;
arr[0][curcol] = 1;//��1���ڵ�һ���м�

for (int i = 2; i <= ROW * COL; i++)
{
	//�ж���һ����һ���Ƿ����Ԫ��
	if (arr[(currow - 1 + ROW) % ROW][(curcol + 1) % COL] != 0)
	{
		//����Ԫ�أ���λ��Ųλ��λ�õĵ���
		currow = (currow + 1) % ROW;
	}
	else
	{
		//������Ԫ�أ�Ųλ����λ����һ����һ��
		currow = (currow - 1 + ROW) % ROW;
		curcol = (curcol + 1) % COL;
	}
	arr[currow][curcol] = i;//Ϊȷ����λ�ø�ֵ
}

//���
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
