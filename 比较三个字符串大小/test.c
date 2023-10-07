//输入三个字符串，输出其中的最大值
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[3][20];
	char string[20];
	printf("请输入三个字符串\n");
	for(i=0;i<=2;i++)
	{
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0)
		strcpy(string,str[0]);
	else
		strcpy(string,str[1]);
	if(strcmp(str[2],string)>0)
		strcpy(string,str[2]);
	printf("\n三个字符串最大是:%s\n",string);
	return 0;
}