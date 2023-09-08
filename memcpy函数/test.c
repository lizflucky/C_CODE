#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
struct s
{
	char name[20];
	int age;
};
char* my_memcpy(void* dest, const void* str, size_t num)
{
	char* ret = dest;
	assert(dest != NULL);//保证非空
	assert(str != NULL);//保证非空
	while (num--)//拷贝
	{
		*(char*)dest = *(char*)str;
		++(char*)dest;
		++(char*)str;
	}
	return ret;
}
int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[10] = { 0 };
	struct s arr3[] = { {"张三",18},{"李四",20} };
	struct s arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}