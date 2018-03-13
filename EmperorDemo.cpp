#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <string.h>
#include <time.h>
#pragma comment(lib,"winmm.lib")
#define MAX 6//系统所允许的最大妃子的数量

int main()
{
	struct tm *ptr;
	time_t it;
	it = time(NULL);
	ptr = localtime(&it);
	printf("%4d年%02d月%02d日 %d:%d:%d\n", ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_hour, ptr->tm_min, ptr->tm_sec);//显示当前时间
	int c, i, j;//c为皇帝的选择，i,j为循环次数
	int count = 5;//当前妃子数目
    int k,n,t;//n为天数,t为胜利判断,k为功能是否实现的判断
	char e_name[50];//皇帝的名字
	char name[MAX][20] = {"貂蝉","西施","杨玉环","赵飞燕","甄嬛"};//妃子名
	char leve_name[5][10] = {"贵人","嫔妃","贵妃","皇贵妃","皇后"};//妃子级别
	int levels[MAX] = {1,2,0,0,0,-1};
	int loves[MAX] = {100,100,100,100,100,-1};//好感度
	char tempname[20];//临时存放字符串
	int temp;//临时存放整数
	PlaySound(TEXT("wav\\童年的和谐.wav"),
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	//核心代码
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (levels[j] < levels[j + 1])
			{
				temp = levels[j];
				levels[j] = levels[j + 1];
				levels[j + 1] = temp;//级别从高到低排序
				strcpy(tempname, name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],tempname);//名字交换
				temp = loves[j];
				loves[j] = loves[j + 1];
				loves[j + 1] = temp;
			}
		}
	}
	printf("\n*******************************************\n");
	printf("测试：查看当前嫔妃状态\n");
	printf("姓名\t\t级别\t\t好感度\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\t\t%s\t\t%d\n",name[i],leve_name[levels[i]],loves[i]);
	}
	printf("\n********************************************\n");
	printf("输入当前皇帝的名号\n");
	scanf_s("%s",e_name,50);
	printf("庆贺皇帝《%s》登基，万岁万岁万万岁。\n",e_name);
	PlaySound(TEXT("wav\\重大场面铜管.wav"),
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	Sleep(1500);
	PlaySound(TEXT("wav\\童年的和谐.wav"),
		NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	for (n=0;n<10;n++)
	{
		k = 0;
		printf("1.皇帝下旨选妃：%12s(增加功能)\n", " ");
		printf("2.皇帝翻牌宠幸：%12s(升级功能)\n", " ");
		printf("3.打入冷宫！：%14s(删除功能)\n", " ");
		printf("4.召见妃子：%16s(刷好感度)\n", " ");
		printf("陛下请下旨：");
		scanf_s("%d", &c);
		getchar();
		switch (c)
		{
		case 1:
			//1.判断数组空间（name,levels,love）
			//2.增加数组元素（）
			if (count < MAX)
			{
				printf("\n皇帝下旨选妃\n");
				//添加操作
				printf("请输入娘娘的名讳\n");
				scanf_s("%s", name[count], 20);
				getchar();
				levels[count] = 0;
				loves[count] = 100;
				count++;
				k++;	
			}
			else
			{
				printf("陛下请保重龙体，后宫已经人满为患了！\n");
			}
			break;
		case 2:
			//1.找到妃子的下标
			//2.修改妃子的状态（levels loves）
			//3.修改其它妃子的状态（levels loves）
			//4.考虑妃子不存在的情况
			printf("皇帝翻牌宠幸\n");
			for (j = 0; j < 1; j++)
			{
				printf("陛下，请输入今天翻牌娘娘的名讳：\n");
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
							levels[i] = (levels[i] >= 4 )? 4:levels[i] + 1;//级别不能超过5
							if (levels[i] == 4)
							{
								printf("恭喜%s册封皇后，普天同庆。",name[i]);
								PlaySound(TEXT("wav\\重大场面铜管.wav"),
									NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
								Sleep(1500);
								PlaySound(TEXT("wav\\童年的和谐.wav"),
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
					printf("\n宫中并无名为%s的妃嫔!请皇上重新选择。\n", tempname);
					j--;
				}
			}
			break;
		case 3:
			//1.查找
			//2.后面一个的数值赋给前一个
			//3.数组--
			printf("打入冷宫！\n");
			printf("请输入要打入冷宫的嫔妃。\n");
			scanf_s("%s", tempname, 20);
			getchar();
			k = 0;
			for (i = 0; i < count; i++)
			{
				if (strcmp(tempname, name[i]) == 0)
				{
					for (; i < count - 1; i++)
					{
						strcpy(name[i], name[i + 1]);//字符串的赋值
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
				printf("\n虚惊一场！\n");
			}
			break;
		case 4:
			//1.查找妃子
			//2.改变妃子的状态
			//3.考虑没有找到的情况
			printf("单独召见\n");
			printf("请输入召见妃子的名讳:\n");
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
				printf("后宫中并没有这位妃嫔！\n");
			}
			break;
		default:
			printf("君无戏言，陛下请重新选择。");
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
						levels[j + 1] = temp;//级别从高到低排序
						strcpy(tempname, name[j]);
						strcpy(name[j], name[j + 1]);
						strcpy(name[j + 1], tempname);//名字交换
						temp = loves[j];
						loves[j] = loves[j + 1];
						loves[j + 1] = temp;
					}
				}
			}
			printf("\n*******************************************\n");
			printf("测试：查看当前嫔妃状态\n");
			printf("姓名\t\t级别\t\t好感度\n");
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
			printf("后宫暴乱，皇帝《%s》卒于： % 4d年 % 02d月 % 02d日 %d:%d:%d\n", e_name,ptr->tm_year + 1900, ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_hour, ptr->tm_min, ptr->tm_sec);
			PlaySound(TEXT("wav\\重大场面鼓.wav"),
				NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			Sleep(1500);
			break;//触发失败条件
		}
	}
	if (n>=10)
	{
		PlaySound(TEXT("wav\\宏大的钟声.wav"),
			NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		printf("\n在皇上《%s》在位期间风调雨顺，国泰民安。\n",e_name);
	}
	else
	{
		printf("\n游戏结束！\n");
		PlaySound(TEXT("wav\\结局.wav"),
			NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	getchar();
	return 0;
}