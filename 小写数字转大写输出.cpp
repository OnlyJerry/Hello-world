#include <stdio.h>
#define N 10//��д�������㵽����
#define MAX 10//������������λ��

int main() 
{
	int i=0,n,j=0;
	char num_upper[N][4] = {"��","Ҽ","��","��","��","��","½","��","��","��"};
	char num_l[][4] = {" ","ʰ","��","Ǫ","�f","ʰ","��","Ǫ","��"};
	int num[MAX];
	printf("������һ������\n");
	scanf_s("%d",&n,20);
	getchar();
	while (n>0)
	{
		num[j] = n % 10;
		n /= 10;
		j++;
	}
	j--;
	while (j >= 0)
	{
		switch (num[j])
		{
		case 0:
			if (j == 4 || j == 8)
			{
				printf("%s", num_l[j]);//����λ����λΪ���򲹳�����f���� 
			}
			if (j >= 1 && num[j-1] != 0)//����Ϊ�������һ�������
			{
				printf("%s", num_upper[num [j]]);
			}
			else 
				printf("");//����Ϊ��ǰ�����Ϊ��
			break;
		default:
			printf("%s%s", num_upper[num[j]], num_l[j]);//��Ϊ�����������
		}
		j--;
	}
	getchar();
}