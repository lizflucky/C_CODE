#define  _CRT_SECURE_NO_WARNINGS 1
//��һ�����־��󣬾����ÿ�д����Ҷ��ǵ����ģ�������ϵ��¶��ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
#include<stdio.h>
int Findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;//�е�����
	int y = col - 1;//�е�����
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)//������arr���Ͻǵ�Ԫ���жϣ�����k�����û��k���Ԫ��
		{
			y--;
		}
		else if (arr[x][y] < k)//С��k�����û��k���Ԫ��
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//û���ҵ���Ԫ��
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int ret = Findnum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}

//�ҵ�������ӡ���±�



//int Findnum(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;//�е�����
//	int y = *py - 1;//�е�����
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)//������arr���Ͻǵ�Ԫ���жϣ�����k�����û��k���Ԫ��
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)//С��k�����û��k���Ԫ��
//		{
//			x++;
//		}
//		else
//		{
//			*px=x;
//			*py=y;
//			return 1;
//		}
//	}
//	//û���ҵ���Ԫ��
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = Findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���:%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}