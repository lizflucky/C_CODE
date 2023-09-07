#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* str, size_t count)
{
	void* ret = dest;//dest�ĳ�ʼλ��
	assert(dest != NULL);//��֤dest�ǿ�
	assert(str != NULL);//��֤str�ǿ�
	if (dest < str)
	{
		while (count--)//��ǰ���һ��һ���ַ��Ŀ���
		{
			*(char*)dest = *(char*)str;
			++(char*)dest;
			++(char*)str;
		}
	}
	else//�Ӻ���ǰһ��һ���ַ��Ŀ���
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)str + count);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[11] = { 0 };
	my_memmove(arr1, arr1+2, 20);
	return 0;
}
