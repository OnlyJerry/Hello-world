#include <stdio.h>

int main()
{
	int i, j;
	int num[] = {16,23,25,34,90};
	for (i = 0; i<=5/2; i++)
	{
		temp = num[i];
		num[i] = num[5 - i - 1];
		num[5 - i - 1] = temp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\t",num[i]);
	}
	getchar();


	return 0;
}