#include <stdio.h>
#include <windows.h>

int main()
{
	const int n = 5;
	int num[] = {12,34,23,67,9},del,i,j,c;
	char m;
	int k=0;
	printf("������һ������ɾ��������\n");
	scanf("%d", &del);
	for (i = 0; i < n - k; i++)
	{
		if (num[i] == del)
		{
			k++;
			for (j = i; j < n - k - 1; j++)
			{
				num[j] = num[j + 1];
			}
			break;
		}
	}
	printf("ɾ���������Ϊ��\n");
	for (i = 0; i < n-k; i++)
	{
		printf("%d\t",num[i]);
	}
	getchar();
	getchar();
	return 0;
}