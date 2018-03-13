#include <stdio.h>

int main()
{
	double price1 = 229.0;//第一项物品价格
	double price2 = 10240.55;//第二项物品价格
	double price3 = 2345.3;//第三项物品价格
	double total = price1 + price2 + price3;//总价格
	double zk = 1.0;//折扣
	if (price1 > 1000 || price2 > 1000 || price3 > 1000)
	{
		zk = 0.3;
	}
	if (total > 5000)
	{
		zk = 0.3;
	}
	total = total*zk;
	printf("应支付的总金额为：%.2f",total);
	getchar();
	return 0;


}