#include <stdio.h>

int main()
{
	int month;
	printf("�������ѯ���·�\n");
	scanf("%d",&month);
	getchar();
	switch(month)
	{
	case 1:
		printf("���·���%d��", 31);
		break;
	case 2:
		printf("���·���%d��", 29);
		break;
	case 3:
		printf("���·���%d��", 31);
		break;
	case 4:
		printf("���·���%d��", 30);
		break;
	case 5:
		printf("���·���%d��", 31);
		break;
	case 6:
		printf("���·���%d��", 30);
		break;
	case 7:
		printf("���·���%d��", 31);
		break;
	case 8:
		printf("���·���%d��", 31);
		break;
	case 9:
		printf("���·���%d��", 30);
		break;
	case 10:
		printf("���·���%d��", 31);
		break;
	case 11:
		printf("���·���%d��", 30);
		break;
	case 12:
		printf("���·���%d��", 31);
		break;
	default:
		printf("��������·ݴ���\n");
		break;
	}
	getchar();
	return 0;
}