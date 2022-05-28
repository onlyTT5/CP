#include <stdio.h>
#include <math.h>
int main()
{
	int c1, r = 10;
	double c2;
	float PI = acos(-1.0);

	c1 = 2 * PI * r;
	c2 = 2 * PI * r;
	printf("c1 = %d, c2 = %lf\n", c1, c2);

	return 0;
}