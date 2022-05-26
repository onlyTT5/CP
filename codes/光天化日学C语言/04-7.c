#include <stdio.h>
int main()
{
	char name[100] = "Zhou";
	int age = 18;
	double meters = 1.70;
	char spostfix = 's';

	printf("My name is %s, %d years old, %.2lf meter%c", name, age, meters, spostfix);

	return 0;
}