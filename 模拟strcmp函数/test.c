#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	//�Ƚ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//���
		}
		str1++;
		str2++;
	}
	//if (*str1 > *str2)
	//	return 1;//����
	//else
	//	return -1;//С��
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