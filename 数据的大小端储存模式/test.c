#define  _CRT_SECURE_NO_WARNINGS 1
//大端（储存）模式：指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中
//小端（储存）模式：指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中
//如：int a=1
//大端储存模式为：00 00 00 01
//小端储存模式为：01 00 00 00
//所以接下来我们只要取出它们第一个字节，看输出的是0还是1即可判断数据在内存的储存方式是大端模式还是小端模式



//写一段代码告诉我们当前机器的字节序是什么？


#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;//将int类型的a，强制转换成char类型.
//	if (*p == 1)//通过解引用操作即可观察a的第一个字节
//		return 1;
//	else
//		return 0;
//}
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//返回1，小端
	//返回0，大端
	return *p;
}
int main()
{
	int check_sys();
	int ret = check_sys();
	if (ret == 1)
		//返回1，小端
		//返回0，大端
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}