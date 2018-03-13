// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define N 5

int main()
{
	int num[N] = { 16,23,90,25,9 };
	int i, j=N, k;
	for (j = N-1; j > 0; j--) 
	{
		for (i = 0; i < j; i++)
		{
			if (num[i] < num[i + 1])
			{
				k = num[i];
				num[i] = num[i+1];
				num[i+1] = k;
			}
			else
				continue;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\t",num[i]);
	}
	getchar();
    return 0;
}
//标准写法
/*
int i,j;
int temp;
int num[N]={16,25,9,90,23};
for(i=0;i<N-1;i++)
{
	for(j=0;j<N-i-1;j++)
	{
		temp=num[j];
		num[j]=num[j+1];
		num[j+1]=temp;
	}
}
for(i=0;i<N;i++)
{
	printf("%d\t",num[i]);
}
*/

