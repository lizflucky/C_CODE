#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int main()
{
	int my_strlen(const char* str);//声明 my_strlen函数
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
int my_strlen(const char* str)//定义 my_strlen函数
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性
	while (*str != '\0')//统计字符串长度
	{
		count++;
		str++;
	}
	return count;
}