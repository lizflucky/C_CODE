//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ������ʾ��¼�ɹ�������������ζ������������ʾ��¼ʧ�ܣ�
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char password[20]={0};	
	for(i=0;i<3;i++)
	{
	printf("����������:\n");
	scanf("%s",&password);
	if(strcmp(password,"123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ����д��if(password==123456)���Ǵ���ģ�������strcmp�������Ƚ������ַ����Ĵ�С
	{
		printf("��¼�ɹ�\n");
		break;
	}
	else
	{
		printf("�������\n");
	}
	}
	if(i==3)
		printf("�������붼������󣬵�¼ʧ��\n");
	return 0;
}