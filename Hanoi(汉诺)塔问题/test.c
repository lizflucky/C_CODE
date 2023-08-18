//Hanoi（汉诺）塔问题：A座上有64个大小不一的盘子，大的在下，小的在上，有一个人想把这64个盘子从A座移动到C座上
//但规定每次只能移动一个盘，并在移动过程中在3个座上都始终保持大盘在下，小盘在上。在移动过程中可以利用B座。
//要求编程序输出盘子的步骤。
//思路：
//（1）a命令b将63个盘子移动到B，a只需要将第64个盘子移动到C，在命令b将63个盘子移动到C即可
//（2）b命令c将62个盘子移动到C，b只需将第63个盘子移动到B，在命令c将62个盘子移动到B即可
//以此类推得，移动n个盘子要经历（2的n次方-1）步
//综上所述：
//（1）将n-1个盘子从一个座移到另一个座（n>1）这是a让其他人做的工作，这是一个递归的过程即将a的任务层层下方，直到第64个人为止
//（2）将一个盘子从一个座上移动到另一个座上。这是a自己做的工作
//编写程序：
//分别用两个函数实现以上的两类操作，用hanoi函数实现上面第1类採作
//（即模拟其他人的任务），用move函数实现上面第2类操作（模拟a的移盘），
//函数调用 hanoi(n，one,two,three）表示将n个盘子从one座移到three座的过程（借助two 座）。
//函数调用move(x,y)表示将1个盘子以x 座移到y座的过程。x和y是代表A，B,C座之一，根据每次不同情况分别取 A,B,C代入。
#include<stdio.h>
int main()
{
	void hanoi(int n,char one,char two,char three);//对hanoi函数的声明
	int m;
		printf("请输入盘子的数量:");
		scanf("%d",&m);
		printf("移动%d个盘子的步骤如下:\n",m);
		hanoi(m,'A','B','C');
	return 0;
}
void hanoi(int n,char one,char two,char three)//定义hanoi函数
{
	void move(char x,char y);//对move函数的声明
	if(n==1)
	{
		move(one,three);
	}
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
void move(char x,char y)//定义move函数
{
	printf("%c-->%c\n",x,y);
}