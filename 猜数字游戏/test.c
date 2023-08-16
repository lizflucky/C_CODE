//系统会随机生成一个随机数，用户输入一个数进去，如果猜大了，系统会提示猜大了，如果猜小了系统会提示猜小了，
//如果猜对了系统提示猜对了，并且可以循环的玩
//时间戳：当前计算机的时间-计算机的起始时间（1970年1月1日0时0分0秒）=（xxxxx）秒
#include<stdio.h>
#include<stdlib.h>//rand、srand函数的头文件
#include<time.h>//time函数的头文件
void game()
{
	//1.生成一个随机值
	int ret=0;
	int i=0;
	//时间戳
	//	用一个函数：time_t time(time_t*time);——>time，用来获取系统时间的一个函数
	//time_t相当于一个长整型 
	ret=rand()%100+1;//是一个产生随机数的函数，范围是0-32767，如果单纯的使用这个函数它第一次产生的随机数，和第二次重新产生的随机数是一样的
	//所以在调用rand这个函数之前要使用srand函数去设置一个随机数的生成器
	while(1)
	{
		printf("请猜一个数字:\n");
	    scanf("%d",&i);
		if(ret<i)
		{
		printf("猜大了\n");
		}
		else if(ret>i)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
void menu()
{
	printf("**********************\n");
	printf("***1.play  0.exti*****\n");
	printf("**********************\n");
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//()里要填一个无符号的整形，如果单纯的填一个数字进去，那它每次输出的数都是一个恒定的值.
	//所以要使里面的值也随机变化，所以用时间戳
	//时间戳
	//	用一个函数：time_t time(time_t*time);——>time，用来获取系统时间的一个函数
	//time_t相当于一个长整型 
	do
	{
		menu();
		printf("请选择:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();//猜数字游戏
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default :
				printf("选择错误\n");
				break;
		}
	}
	while(input);
	return 0;
}