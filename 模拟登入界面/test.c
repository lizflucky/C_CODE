//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确，则提示登录成功，如果密码三次都输入错误，则显示登录失败）
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char password[20]={0};	
	for(i=0;i<3;i++)
	{
	printf("请输入密码:\n");
	scanf("%s",&password);
	if(strcmp(password,"123456")==0)//==不能用来比较两个字符串是否相等，如果写出if(password==123456)则是错误的，所以用strcmp函数来比较两个字符串的大小
	{
		printf("登录成功\n");
		break;
	}
	else
	{
		printf("密码错误\n");
	}
	}
	if(i==3)
		printf("三次密码都输入错误，登录失败\n");
	return 0;
}