#include<stdio.h>
int main ()
{
	int search(int array[],int k,int sz);
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(a)/sizeof(a[0]);//������aÿ��Ԫ���ֽڴ�С
	int ret=search(a,k,sz);
	if(ret==-1)
	{
		printf("�Ҳ���������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d\n",ret);
	}
	return 0;
}
int search(int array[],int k,int sz)
{
	int left=0;//����������±�
	int right=sz-1;//�������ұ��±�
		while(left<=right)
		{
			//�ж�k�Ĵ�С
			int mid=(left+right)/2;
			if(array[mid]<k)
				left=mid+1;
			else if(array[mid]>k)
				right=mid-1;
			else
				return mid;
		}
		return -1;//������-1�����������û����k��ȵ�����
}