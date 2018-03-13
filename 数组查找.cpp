// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
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
	printf("\n数组的和为：%d\n",sum);
	averge = sum / 7.0;
	printf("\n数组的平均和为：%.2f\n",averge);
	printf("\n请输入一个数字看看是否存在于数组中\n");
	scanf_s("%d",&test);
	for (i = 0; i < 7; i++)
	{
		if (test == num[i])
		{
			printf("\n你输入的数字存在于数组中\n");
			break;
		}
		else
			continue;
	}
	if (i == 7)
	{
		printf("\n你输入的数字不存在于数组中\n");
	}
	Sleep(2000);
    return 0;
}

