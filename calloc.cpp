//malloc ��calloc����������calloc����ֵ��
//�����ַ���ֵ��Ϊvoid*��Ҫǿ��ת��������
//������ռ����Ҳ����ʵ��ȡֵ��ֵ������calloc����ֵ������ָ���Ŀռ�
//���ֶ��ǰ��ռ��������� �ٰ������������ͳ��ȵõ�������������Ҳ����ʵ�ֲ�������ֻ�����޶��ڸ�ֵ



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
		printf("�������%d������\n", i + 1);
		scanf_s("%d",num+i);
		getchar();
	}*/
	for (i = 0; i < 4; i++)
	{
		printf("�������%d��������:%d\n",i+1,*(num+i));
	}
	printf("%d\n",sizeof(int));
	free(num);
	num = NULL;
	system("pause");
}