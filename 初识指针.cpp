#include < stdio.h>

int main()
{
	//*ptr_yearΪָ��ָ���ֵ ptr_yearΪָ��ָ��ĵ�ַ��&ptr_yearΪָ��ĵ�ַ
	int year = 2016;
	int* ptr_year = &year;
	printf("%p\n%p\n",ptr_year,&ptr_year);//*��ʾ������ֵ��Ϊ��ַ����ȡ�ĵ�ַ�е�ֵ��&��ʾ�������Ϊֵ����ȡ���ַ��
	getchar();

	return 0;
}