#include <stdio.h>
float f2c(float f )
{
	float c;
	c = (5.0/9.0) * (f - 32);
	return c;
}
int main()
{
	printf("%f",f2c(98));

	return 0;
}
