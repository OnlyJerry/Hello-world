//malloc 和calloc的区别在于calloc赋初值零
//这两种返回值都为void*需要强制转换了类型
//若分配空间较少也可以实现取值赋值，但是calloc赋初值仅限于指定的空间
//两种都是按空间总量分配 再按总量除以类型长度得到个数。不整除也可以实现不报错但是只有在限度内赋值



#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int *num;
	int nums[5];
	num = (int*)calloc(4,4);
	printf("hello world\n");
	/*for (i = 0; i < 5; i++)
	{
		printf("请输入第%d个数字\n", i + 1);
		scanf_s("%d",num+i);
		getchar();
	}*/
	for (i = 0; i < 4; i++)
	{
		printf("你输入的%d个数字是:%d\n",i+1,*(num+i));
	}
	printf("%d\n",sizeof(int));
	free(num);
	num = NULL;
	system("pause");
}