#define  _CRT_SECURE_NO_WARNINGS 1
//如果在一个固定的进制中，一个n位自然数等于自身各个数位上数字的n次幂之和，则称此数为自幂数。
//一位自幂数：独身数
//两位自幂数：没有
//三位自幂数：水仙花数
//四位自幂数：四叶玫瑰数
//五位自幂数：五角星数
//六位自幂数：六合数
//七位自幂数：北斗七星数
//八位自幂数：八仙数
//九位自幂数：九九重阳数
//十位自幂数：十全十美数
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp/=10)//计算出i的位数，---n位数
		{
			n++;
		}
		tmp = i;
		while (tmp)//计算每一位的n次方之和sum
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (i == sum)//判断i==sum
		{
			printf("%d ", i);
		}
	}
	return 0;
}