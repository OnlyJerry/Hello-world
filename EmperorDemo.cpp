#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <string.h>
#include <time.h>
#pragma comment(lib,"winmm.lib")
#define MAX 6//ϵͳ�������������ӵ�����

int main()
{
	struct tm *ptr;
	time_t it;
	it = time(NULL);
	ptr = localtime(&it);
	printf("%4d��%02d��%02d�� %d:%d:%d\n", ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_hour, ptr->tm_min, ptr->tm_sec);//��ʾ��ǰʱ��
	int c, i, j;//cΪ�ʵ۵�ѡ��i,jΪѭ������
	int count = 5;//��ǰ������Ŀ
    int k,n,t;//nΪ����,tΪʤ���ж�,kΪ�����Ƿ�ʵ�ֵ��ж�
	char e_name[50];//�ʵ۵�����
	char name[MAX][20] = {"����","��ʩ","����","�Է���","���"};//������
	char leve_name[5][10] = {"����","����","����","�ʹ���","�ʺ�"};//���Ӽ���
	int levels[MAX] = {1,2,0,0,0,-1};
	int loves[MAX] = {100,100,100,100,100,-1};//�øж�
	char tempname[20];//��ʱ����ַ���
	int temp;//��ʱ�������
	PlaySound(TEXT("wav\\ͯ��ĺ�г.wav"),
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	//���Ĵ���
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (levels[j] < levels[j + 1])
			{
				temp = levels[j];
				levels[j] = levels[j + 1];
				levels[j + 1] = temp;//����Ӹߵ�������
				strcpy(tempname, name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],tempname);//���ֽ���
				temp = loves[j];
				loves[j] = loves[j + 1];
				loves[j + 1] = temp;
			}
		}
	}
	printf("\n*******************************************\n");
	printf("���ԣ��鿴��ǰ����״̬\n");
	printf("����\t\t����\t\t�øж�\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\t\t%s\t\t%d\n",name[i],leve_name[levels[i]],loves[i]);
	}
	printf("\n********************************************\n");
	printf("���뵱ǰ�ʵ۵�����\n");
	scanf_s("%s",e_name,50);
	printf("��ػʵۡ�%s���ǻ����������������ꡣ\n",e_name);
	PlaySound(TEXT("wav\\�ش���ͭ��.wav"),
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	Sleep(1500);
	PlaySound(TEXT("wav\\ͯ��ĺ�г.wav"),
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	for (n=0;n<10;n++)
	{
		k = 0;
		printf("1.�ʵ���ּѡ����%12s(���ӹ���)\n", " ");
		printf("2.�ʵ۷��Ƴ��ң�%12s(��������)\n", " ");
		printf("3.�����乬����%14s(ɾ������)\n", " ");
		printf("4.�ټ����ӣ�%16s(ˢ�øж�)\n", " ");
		printf("��������ּ��");
		scanf_s("%d", &c);
		getchar();
		switch (c)
		{
		case 1:
			//1.�ж�����ռ䣨name,levels,love��
			//2.��������Ԫ�أ���
			if (count < MAX)
			{
				printf("\n�ʵ���ּѡ��\n");
				//��Ӳ���
				printf("���������������\n");
				scanf_s("%s", name[count], 20);
				getchar();
				levels[count] = 0;
				loves[count] = 100;
				count++;
				k++;	
			}
			else
			{
				printf("�����뱣�����壬���Ѿ�����Ϊ���ˣ�\n");
			}
			break;
		case 2:
			//1.�ҵ����ӵ��±�
			//2.�޸����ӵ�״̬��levels loves��
			//3.�޸��������ӵ�״̬��levels loves��
			//4.�������Ӳ����ڵ����
			printf("�ʵ۷��Ƴ���\n");
			for (j = 0; j < 1; j++)
			{
				printf("���£���������췭����������䣺\n");
				scanf_s("%s", tempname, 20);
				getchar();
				for (i = 0; i < count; i++)
				{
					if (strcmp(tempname, name[i]) == 0)
					{
						k++;
						break;
					}
				}
				if (k > 0)
				{
					for (i = 0; i < count; i++)
					{
						if (strcmp(tempname, name[i]) == 0)
						{
							loves[i] += 10;
							levels[i] = (levels[i] >= 4 )? 4:levels[i] + 1;//�����ܳ���5
							if (levels[i] == 4)
							{
								printf("��ϲ%s���ʺ�����ͬ�졣",name[i]);
								PlaySound(TEXT("wav\\�ش���ͭ��.wav"),
									NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
								Sleep(1500);
								PlaySound(TEXT("wav\\ͯ��ĺ�г.wav"),
									NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
							}
						}
						else
						{
							loves[i] -= 10;
						}
					}
				}
				else
				{
					printf("\n���в�����Ϊ%s������!���������ѡ��\n", tempname);
					j--;
				}
			}
			break;
		case 3:
			//1.����
			//2.����һ������ֵ����ǰһ��
			//3.����--
			printf("�����乬��\n");
			printf("������Ҫ�����乬��������\n");
			scanf_s("%s", tempname, 20);
			getchar();
			k = 0;
			for (i = 0; i < count; i++)
			{
				if (strcmp(tempname, name[i]) == 0)
				{
					for (; i < count - 1; i++)
					{
						strcpy(name[i], name[i + 1]);//�ַ����ĸ�ֵ
						loves[i] = loves[i + 1];
						levels[i] = levels[i + 1];
					}
					count--;
					k++;
					break;
				}
				else
					continue;
			}
			if (k < 0)
			{
				printf("\n�龪һ����\n");
			}
			break;
		case 4:
			//1.��������
			//2.�ı����ӵ�״̬
			//3.����û���ҵ������
			printf("�����ټ�\n");
			printf("�������ټ����ӵ�����:\n");
			scanf_s("%s", tempname, 20);
			getchar();
			for (i = 0; i < count; i++)
			{
				if (strcmp(tempname, name[i]) == 0)
				{
					loves[i] += 10;
					k++;
				}
			}
			if (k < 0)
			{
				printf("���в�û����λ���ɣ�\n");
			}
			break;
		default:
			printf("����Ϸ�ԣ�����������ѡ��");
		}
		if (k > 0)
		{
			for (i = 0; i < count - 1; i++)
			{
				for (j = 0; j < count - i - 1; j++)
				{
					if (levels[j] < levels[j + 1])
					{
						temp = levels[j];
						levels[j] = levels[j + 1];
						levels[j + 1] = temp;//����Ӹߵ�������
						strcpy(tempname, name[j]);
						strcpy(name[j], name[j + 1]);
						strcpy(name[j + 1], tempname);//���ֽ���
						temp = loves[j];
						loves[j] = loves[j + 1];
						loves[j + 1] = temp;
					}
				}
			}
			printf("\n*******************************************\n");
			printf("���ԣ��鿴��ǰ����״̬\n");
			printf("����\t\t����\t\t�øж�\n");
			for (i = 0; i < count; i++)
			{
				printf("%s\t\t%s\t\t%d\n", name[i], leve_name[levels[i]], loves[i]);
			}
			printf("\n********************************************\n");
		}
		else
		{
			n--;
		}
		for (i = 0, t = 0; i < count; i++)
		{
			if (loves[i] < 60)
			{
				t++;
			}
		}
		if (t >= 3)
		{
			printf("�󹬱��ң��ʵۡ�%s�����ڣ� % 4d�� % 02d�� % 02d�� %d:%d:%d\n", e_name,ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_hour, ptr->tm_min, ptr->tm_sec);
			PlaySound(TEXT("wav\\�ش����.wav"),
				NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			Sleep(1500);
			break;//����ʧ������
		}
	}
	if (n>=10)
	{
		PlaySound(TEXT("wav\\��������.wav"),
			NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		printf("\n�ڻ��ϡ�%s����λ�ڼ�����˳����̩�񰲡�\n",e_name);
	}
	else
	{
		printf("\n��Ϸ������\n");
		PlaySound(TEXT("wav\\���.wav"),
			NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	getchar();
	return 0;
}