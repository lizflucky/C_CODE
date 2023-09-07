#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* str, size_t count)
{
	void* ret = dest;//dest的初始位置
	assert(dest != NULL);//保证dest非空
	assert(str != NULL);//保证str非空
	if (dest < str)
	{
		while (count--)//从前向后一个一个字符的拷贝
		{
			*(char*)dest = *(char*)str;
			++(char*)dest;
			++(char*)str;
		}
	}
	else//从后向前一个一个字符的拷贝
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
