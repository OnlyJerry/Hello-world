// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
		printf("请输入每个学生的成绩\n");
		scanf("%d",&num[i]);
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\t",num[i]);
	}
	Sleep(1000);
    return 0;
}

