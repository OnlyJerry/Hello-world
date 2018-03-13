// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//
#include <stdio.h>


int main()
{
	int i,num[30],j=0,nu=0;
	char c;
	printf("请输入一个数字\n");
	scanf_s("%d", &i);
	while (c = getchar() != '\n');
	while (i > 0)
	{
		num[j] = i % 10;
		nu *= 10;
		nu += num[j];
		printf("%d", num[j]);
		i /= 10;
		j++;
	}
	printf("\n%d\n",nu);
	/*while (j > 0)
	{
		j--;
		nu *= 10;
		nu += num[j];
		printf("%d\n", num[j]);
	}
	printf("%d", nu);*/
	getchar();
    return 0;
}

