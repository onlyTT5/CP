#include <stdio.h>
int main()
{
	char name[100];
	int height;

	printf("请大侠输入姓名：");
	scanf_s("%s", name, 100);
	printf("请大侠输入身高(cm)：");
	scanf_s("%d", &height);
	printf("%s大侠，身高%dcm，骨骼精奇，是百年一遇的人才，只要好好学习C语言，日后必成大器！\n", name, height);

	return 0;
}