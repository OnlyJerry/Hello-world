#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int calcSum();//����1��100֮���ż���ͣ�����ԭ�ͣ�
void calccircle();//����Բ����ĺ���������ԭ�ͣ�
void calcRectangle();//�����������ĺ���������ԭ�ͣ�

int calcSum()//����1��100֮���ż���ͣ�������ֵ��
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

void calccircle()//����Բ������ĺ�������������ֵ��
{
	double radius;//Բ�İ뾶
	double s;//Բ�����
	printf("������Բ�İ뾶\n");
	scanf_s("%lf",&radius,8);
	getchar();
	s = 3.14*pow(radius,2);
	printf("Բ�����Ϊ��%.2lf\n",s);
}

void calcRectangle()//������ε������������������ֵ��
{
	double height;//��
	double width;//��
	double s;//���
	printf("��������εĸ�\n");
	scanf_s("%lf",&height,8);
	getchar();
	printf("��������εĿ�\n");
	scanf("%lf",&width,8);
	getchar();
	s = height*width;
	printf("���ε����Ϊ��%.2lf\n",s);
}

int main()
{
	calccircle();//����Բ��������㺯��
	calcRectangle();//���þ���������㺯��
	int sum = calcSum();//���ô�����ֵ�ĺ���
	printf("1��100֮��ż����Ϊ��%d\n",sum);
	system("pause");

	return 0;
}