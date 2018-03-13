// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include <stdio.h>
#define N 5


int main()
{
	int i, j, k, num[N] = {25,16,9,90,23};
	for (i=0;i<N;i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (num[i] < num[j])
			{
				k = num[j];
				num[j] = num[i];
				num[i] = k;
			}
			else
				continue;
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\t", num[i]);
	}
	getchar();
    return 0;
}

