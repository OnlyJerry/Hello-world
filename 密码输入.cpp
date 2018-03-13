#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int chcode()
{
	int i, m=0;
	char pw[50], ch;
	char *syspw = "abc";
	printf("请输入密码：");
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
			printf("输入错误请重新输入！\n");
			m++;
		}
		else
		{
			printf("密码正确！\n");
			system("pause");
			return 1;
		}
	}
	printf("连续三次输入错误!\n");
	system("pause");
	return 0;
}

int main()
{
	int login = chcode();
	if (login)printf("登陆成功！\n");
	else printf("登陆失败！\n");
	getchar();
	return 0;
}