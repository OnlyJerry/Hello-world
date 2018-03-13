#include <stdio.h>
#define N 10//大写字数（零到玖）
#define MAX 10//允许输入的最大位数

int main() 
{
	int i=0,n,j=0;
	char num_upper[N][4] = {"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
	char num_l[][4] = {" ","拾","佰","仟","萬","拾","佰","仟","亿"};
	int num[MAX];
	printf("请输入一个数字\n");
	scanf_s("%d",&n,20);
	getchar();
	while (n>0)
	{
		num[j] = n % 10;
		n /= 10;
		j++;
	}
	j--;
	while (j >= 0)
	{
		switch (num[j])
		{
		case 0:
			if (j == 4 || j == 8)
			{
				printf("%s", num_l[j]);//若万位或亿位为零则补充输出萬和亿 
			}
			if (j >= 1 && num[j-1] != 0)//连续为零则最后一个输出零
			{
				printf("%s", num_upper[num [j]]);
			}
			else 
				printf("");//连续为零前面输出为空
			break;
		default:
			printf("%s%s", num_upper[num[j]], num_l[j]);//不为零则正常输出
		}
		j--;
	}
	getchar();
}