#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int calcSum();//计算1到100之间的偶数和（函数原型）
void calccircle();//计算圆面积的函数（函数原型）
void calcRectangle();//计算矩形面积的函数（函数原型）

int calcSum()//计算1到100之间的偶数和（带返回值）
{
	int i, Sum = 0;
	for (i=0;i<=100;i++)
	{
		if (i % 2 == 0)
		{
			Sum += i;
		}
	}
	return Sum;
}

void calccircle()//计算圆的面积的函数（不带返回值）
{
	double radius;//圆的半径
	double s;//圆的面积
	printf("请输入圆的半径\n");
	scanf_s("%lf",&radius,8);
	getchar();
	s = 3.14*pow(radius,2);
	printf("圆的面积为：%.2lf\n",s);
}

void calcRectangle()//计算矩形的面积函数（不带返回值）
{
	double height;//高
	double width;//宽
	double s;//面积
	printf("请输入矩形的高\n");
	scanf_s("%lf",&height,8);
	getchar();
	printf("请输入矩形的宽\n");
	scanf("%lf",&width,8);
	getchar();
	s = height*width;
	printf("矩形的面积为：%.2lf\n",s);
}

int main()
{
	calccircle();//调用圆的面积计算函数
	calcRectangle();//调用矩形面积计算函数
	int sum = calcSum();//调用带返回值的函数
	printf("1到100之间偶数和为：%d\n",sum);
	system("pause");

	return 0;
}