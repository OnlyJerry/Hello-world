#include < stdio.h>

int main()
{
	//*ptr_year为指针指向的值 ptr_year为指针指向的地址，&ptr_year为指针的地址
	int year = 2016;
	int* ptr_year = &year;
	printf("%p\n%p\n",ptr_year,&ptr_year);//*表示将其后的值作为地址并读取改地址中的值，&表示将其后视为值并读取其地址。
	getchar();

	return 0;
}