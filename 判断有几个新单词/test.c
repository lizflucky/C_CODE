//����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո����
#include<stdio.h>
int main()
{
	char str[20];
	int i,word=0,num=0;
	char c;
	printf("������һ�е���:");
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
	printf("һ����%d���µ���\n",num);
	return 0;
}