#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i, word=0, num = 0;
	gets(string);
	for (i = 0; string[i] != '\0'; i++)
	{
		
		if (string[i] ==' ')		//�����жϣ��϶��ַ��Ƿ�Ϊ�ո����ж����������word���¸�ֵΪ0����Ϊ�����´����ٵ�Ԥ��
		{					
			word = 0;			
		}						
		else if (word ==0)			//�ڵ�һ���ж���������ʱ�򣬼��������ַ����ǿո�ʱ���ı�word�洢��ֵ���ı���״̬1����¼������Ŀ��������״̬1���� ��������¼
		{
			word = 1;
			num++;
		}
	}
	printf("%d words\n", num);
	return 0;
	
}