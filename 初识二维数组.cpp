#include  <stdio.h>

int main()
{
	int i, j;
	double scores[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("请输入第%d个同学的第%d门课成绩\n",i+1,j+1);
			scanf_s("%lf",&scores[i][j]);
			getchar();
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("\t");
		for (j = 0; j < 3; j++)
		{
			printf("%.2lf\t",scores[i][j]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}