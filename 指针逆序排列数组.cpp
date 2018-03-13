#include <stdio.h>
#define COUNT 5//数组的长度
int main()
{
	int temp;
	int i;
	int num[] = { 16,23,25,34,90 };
	int * ptr_start = num;
	int * ptr_end = num+COUNT-1;
	for (;ptr_start < ptr_end;ptr_start++,ptr_end--)
	{
		temp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = temp;
	}
	/*for (i = 0; i < 6 / 2; i++)
	{
		temp = num[i];
		num[i] = num[6 - i - 1];
		num[6 - i - 1] = temp;
	}*/
	for (i = 0; i < COUNT; i++)
	{
		printf("%d\t", num[i]);
	}
	getchar();


	return 0;
}