// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>


int main()
{
	int i, num[7] = {8,4,2,1,23,344,12};
	int sum=0,test=0;
	double averge=0;
	for (i = 0; i < 7;i++)
	{
		printf("%d\t",num[i]);
	}
	for (i=0;i<7;i++)
	{
		sum += num[i];
	}
	printf("\n����ĺ�Ϊ��%d\n",sum);
	averge = sum / 7.0;
	printf("\n�����ƽ����Ϊ��%.2f\n",averge);
	printf("\n������һ�����ֿ����Ƿ������������\n");
	scanf_s("%d",&test);
	for (i = 0; i < 7; i++)
	{
		if (test == num[i])
		{
			printf("\n����������ִ�����������\n");
			break;
		}
		else
			continue;
	}
	if (i == 7)
	{
		printf("\n����������ֲ�������������\n");
	}
	Sleep(2000);
    return 0;
}

