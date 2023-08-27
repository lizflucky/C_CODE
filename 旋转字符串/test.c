#define  _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB


//旋转字符串
#include<stdio.h>
#include<string.h>
#include<assert.h>
//1.直接一个一个的旋转字符
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//		//左旋一个字符
//		//1
//	{
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}
//2.三步翻转法
//abcdef
//先旋转ab得-----bacdef
//再旋转cdef得---bafedc
//再旋转bafedc得---cdefab
void reverse(char* left,char*right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k-1);//逆序左边
	reverse(arr+k,arr+len-1);//逆序右边
	reverse(arr,arr+len-1);//逆序整体
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}