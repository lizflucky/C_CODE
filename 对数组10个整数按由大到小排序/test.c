//��ѡ�񷨶�������10����������С�����������
//��νѡ�񷨾����Ƚ�10������С������a[0]���жԻ����ٽ�a[1]-a[9]����С������a[1]�Ի�......ÿ�Ƚ�һ�֣�
//�ҳ�һ��δ�������������С��һ�������Ƚ�9��
#include<stdio.h>
int main ()
{
	void sort(int array[],int n);
	int i,a[10];
	printf("������10������:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	printf("��С��������:\n");
	for(i=0;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	return 0;
}
void sort(int array[],int n)
{
	int i,k,j,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		if(array[j]<array[k])
			k=j;
		t=array[k];
		array[k]=array[i];
		array[i]=t;
	}
}