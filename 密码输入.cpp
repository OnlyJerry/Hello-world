#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int chcode()
{
	int i, m=0;
	char pw[50], ch;
	char *syspw = "abc";
	printf("���������룺");
	while (m < 3)
	{
		i = 0;
		while ((ch = _getch() ) !=  '\r')
		{
			if (ch == '\b' && i > 0)
			{
				printf("\b \b");
				--i;
			}
			else if (ch != '\b')
			{
				pw[i++] = ch;
				printf("*");
			}
		}
		pw[i] = '\0';
		printf("\n");
		if (strcmp(pw,syspw)!=0)
		{
			printf("����������������룡\n");
			m++;
		}
		else
		{
			printf("������ȷ��\n");
			system("pause");
			return 1;
		}
	}
	printf("���������������!\n");
	system("pause");
	return 0;
}

int main()
{
	int login = chcode();
	if (login)printf("��½�ɹ���\n");
	else printf("��½ʧ�ܣ�\n");
	getchar();
	return 0;
}