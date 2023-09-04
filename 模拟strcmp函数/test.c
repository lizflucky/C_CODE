#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	//比较
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//相等
		}
		str1++;
		str2++;
	}
	//if (*str1 > *str2)
	//	return 1;//大于
	//else
	//	return -1;//小于
	return(*str1 - *str2);
}
int main()
{
	char*p1 = "abcdef";
	char*p2 = "qwer";
	int ret = my_strcmp(p1, p2);
	printf("ret=%d\n", ret);
	return 0;
}