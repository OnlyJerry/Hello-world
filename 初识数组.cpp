// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#define N 5

int main()
{
	int num[N];
	int i;
	for (i = 0; i < N; i++)
	{
		printf("������ÿ��ѧ���ĳɼ�\n");
		scanf("%d",&num[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\t",num[i]);
	}
	Sleep(1000);
    return 0;
}

