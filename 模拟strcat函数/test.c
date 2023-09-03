#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char *my_strcat(char* dest, const char* str)
{
	char *ret= dest;
	assert(dest != NULL);
	assert(str != NULL);
	while (*dest != '\0')//找到目的字符串的'\0'
	{
		dest++;
	}
	while (*dest++ = *str++)//追加字符
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}