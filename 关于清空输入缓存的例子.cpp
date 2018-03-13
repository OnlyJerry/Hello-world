// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	while (1) {
		int chose=0,i=0;//赋初值很有必要，若不赋初值第二次运行当前一次输入正确时会出错
		char c;
		printf("性格测试：\n如果你是一位君王，对于身旁的伴侣你希望？\n1、只有一位珍爱的妻子"
			"\n2、可以有两位以上的爱人\n3、拥有三千佳丽\n");
		do
		{
			i++;
			if (i == 1)
				printf("请选择\n");
			else
				printf("输入错误！请重新输入。\n");
			scanf_s("%d", &chose);
			while (c = getchar() != '\n');//清空缓存，以防止未输入整数而出错
		}
		while (chose != 3 && chose != 2 && chose != 1);
		switch (chose)
		{
		case 1:
			printf("你选择了生命中的唯一，然而我已经看出了一切\n");
			break;
		case 2:
			printf("sjaknsakk\n");
			break;
		case 3:
			printf("sjssjsjsjsjj\n");
			break;
		}
		Sleep(500);
	}
	return 0;
}
