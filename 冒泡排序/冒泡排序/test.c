#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void paixu(int a[], int sz);
	int i, a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(a) / sizeof(a[0]);//���������a��Ԫ�صĸ���
	//������a���������ų�����
	//������a���д��Σ�ʵ���ϴ���ȥ��������a��Ԫ�صĵĵ�ַ&a[0]
	paixu(a, sz);//ð��������
	for (i = 0; i < sz; i++)
	{
		printf("%2d", a[i]);
	}
	return 0;
}
void paixu(int a[], int sz)
{
	//ȷ��ð�����������
	int j, i, temp, k;
	for (i = 0; i < sz - 1; i++)
	{
		k=1;//������һ��ð�������Ѿ�����
		//ÿһ��ð������
		for (j = 0; j < sz - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
				temp = a[j + 1];
			    a[j + 1] = a[j];
				a[j] = temp;
				k = 0;//������������ݲ���ȫ����
		}
		if (k == 1)//k==1˵���Ѿ�����
			break;
	}
}
//sizeof(������)-��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�