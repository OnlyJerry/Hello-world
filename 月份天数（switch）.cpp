#include <stdio.h>

int main()
{
	int month;
	printf("请输入查询的月份\n");
	scanf("%d",&month);
	getchar();
	switch(month)
	{
	case 1:
		printf("该月份有%d天", 31);
		break;
	case 2:
		printf("该月份有%d天", 29);
		break;
	case 3:
		printf("该月份有%d天", 31);
		break;
	case 4:
		printf("该月份有%d天", 30);
		break;
	case 5:
		printf("该月份有%d天", 31);
		break;
	case 6:
		printf("该月份有%d天", 30);
		break;
	case 7:
		printf("该月份有%d天", 31);
		break;
	case 8:
		printf("该月份有%d天", 31);
		break;
	case 9:
		printf("该月份有%d天", 30);
		break;
	case 10:
		printf("该月份有%d天", 31);
		break;
	case 11:
		printf("该月份有%d天", 30);
		break;
	case 12:
		printf("该月份有%d天", 31);
		break;
	default:
		printf("您输入的月份错误！\n");
		break;
	}
	getchar();
	return 0;
}