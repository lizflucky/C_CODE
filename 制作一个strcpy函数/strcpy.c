#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int main()
{
	//strcpy
	//�ַ�������
	char* my_strcpy(char* dest, const char* scr);
	char arr1[] = "##########";
	char arr2[] = "bit";
	printf("%s\n",my_strcpy(arr1, arr2));
	return 0;
}
char* my_strcpy(char* dest, const char* scr)
{
	char* ret = dest;
	assert(dest != NULL);//����
	assert(scr != NULL);//����
	while (*dest++ = *scr++)//��scrָ�����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	{
		;
	}
	return ret;
}