#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i, word=0, num = 0;
	gets(string);
	for (i = 0; string[i] != '\0'; i++)
	{
		
		if (string[i] ==' ')		//做出判断，断定字符是否为空格，若判定成立，则给word重新赋值为0，即为做好新词来临的预告
		{					
			word = 0;			
		}						
		else if (word ==0)			//在第一个判定不成立的时候，即遇见的字符不是空格时，改变word存储的值即改变辩词状态1，记录单词数目，如果辩词状态1不变 ，即不记录
		{
			word = 1;
			num++;
		}
	}
	printf("%d words\n", num);
	return 0;
	
}