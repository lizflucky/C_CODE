#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int main()
{
	int my_strlen(const char* str);//���� my_strlen����
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
int my_strlen(const char* str)//���� my_strlen����
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')//ͳ���ַ�������
	{
		count++;
		str++;
	}
	return count;
}