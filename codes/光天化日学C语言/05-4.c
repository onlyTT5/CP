#include <stdio.h>
int main()
{
	char name[100];
	int height;

	printf("���������������");
	scanf_s("%s", name, 100);
	printf("������������(cm)��");
	scanf_s("%d", &height);
	printf("%s���������%dcm���������棬�ǰ���һ�����˲ţ�ֻҪ�ú�ѧϰC���ԣ��պ�سɴ�����\n", name, height);

	return 0;
}