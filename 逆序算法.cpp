#include <stdio.h>
#define N 5

int main()
{
	int i, temp;
	int num[N] = {9,12,23,34,67};
	for (i = 0; i < N/2; i++)
	{
			temp = num[i];
			num[i] = num[N - i - 1];
			num[N - i - 1] = temp;
	}
	printf("\n逆序的数组为：\t");
	for (i = 0; i < N; i++)
	{
		printf("%d\t",num[i]);
	}
	getchar();
}