// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	while (1) {
		int chose=0,i=0;//����ֵ���б�Ҫ����������ֵ�ڶ������е�ǰһ��������ȷʱ�����
		char c;
		printf("�Ը���ԣ�\n�������һλ�������������Եİ�����ϣ����\n1��ֻ��һλ�䰮������"
			"\n2����������λ���ϵİ���\n3��ӵ����ǧ����\n");
		do
		{
			i++;
			if (i == 1)
				printf("��ѡ��\n");
			else
				printf("����������������롣\n");
			scanf_s("%d", &chose);
			while (c = getchar() != '\n');//��ջ��棬�Է�ֹδ��������������
		}
		while (chose != 3 && chose != 2 && chose != 1);
		switch (chose)
		{
		case 1:
			printf("��ѡ���������е�Ψһ��Ȼ�����Ѿ�������һ��\n");
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
