#include <stdio.h>
int main()
{
	double x = 520.1314;
	int y = 520;

	printf("[%10.5lf]\n", x);
	printf("[%-10.5lf]\n", x);


	printf("[%10.8d]\n", y);
	printf("[%-10.8d]\n", y);

	return 0;
}