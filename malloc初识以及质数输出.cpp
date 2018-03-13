#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	printf("hello world\n");
	int * num = (int *)malloc(4*sizeof(int));
	for (i = 0; i < 4; i++)
	{
		printf("请输入第%d个数字\n",i+1);
		scanf("%d",num+i);
		getchar();
	}
	for (i = 0; i < 4; i++)
	{
		printf("你输入的第%d个数字为%d\n",i+1,*(num+i));
	}
	system("pause");
	for (i = 100; i < 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
			if (i - j == 1)
				printf("%4d",i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}