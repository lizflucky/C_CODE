//输入一行字符，统计其中有多少个单词，单词之间用空格隔开
#include<stdio.h>
int main()
{
	char str[20];
	int i,word=0,num=0;
	char c;
	printf("请输入一行单词:");
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c==' ')
			word=0;
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	printf("一共有%d个新单词\n",num);
	return 0;
}