#include <stdio.h>

int main()
{
	double price1 = 229.0;//��һ����Ʒ�۸�
	double price2 = 10240.55;//�ڶ�����Ʒ�۸�
	double price3 = 2345.3;//��������Ʒ�۸�
	double total = price1 + price2 + price3;//�ܼ۸�
	double zk = 1.0;//�ۿ�
	if (price1 > 1000 || price2 > 1000 || price3 > 1000)
	{
		zk = 0.3;
	}
	if (total > 5000)
	{
		zk = 0.3;
	}
	total = total*zk;
	printf("Ӧ֧�����ܽ��Ϊ��%.2f",total);
	getchar();
	return 0;


}