#include "stdafx.h"



int main()
{
	int num = 37;
	int c, v;
	c = num / 2 + 1; v = num / 2 + 2 + num;
	int i, j;
	for (i = 1; i < num + 1; i++)
	{
		printf("\t");
		for (j = 1; j < num + 1; j++)
		{
			if (i <= c)
			{
				if (j > c - i&&j < c + i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				if (j > i - c&&j < v - i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	getchar();
	return 0;
}